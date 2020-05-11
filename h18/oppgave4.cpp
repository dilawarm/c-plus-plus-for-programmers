#include <iostream>
using namespace std;

class One {
public:
    One() {}
    friend ostream &operator<<(ostream &out, const One &) {
        return out << 1;
    }
};

class MinusThree {
public:
    MinusThree() {}
    friend ostream &operator<<(ostream &out, const MinusThree &) {
        return out << -3;
    }
};

class Three {
public:
    Three() {}
    friend ostream &operator<<(ostream &out, const Three &) {
        return out << 3;
    }
    MinusThree operator-() const {
        return MinusThree();
    }
};

class Two {
public:
    Two() {}
    friend ostream &operator<<(ostream &out, const Two &) {
        return out << 2;
    }
    Two operator*(const One &) const {
        return *this;
    }
    Three operator+(const One &) const {
        return Three();
    }
};

int main() {
    One one;
    Two two;
    cout << one << endl;
    cout << two * one << endl;
    cout << two * one + one << endl;
    cout << -(two * one + one) << endl;
}