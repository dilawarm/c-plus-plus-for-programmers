#include <iostream>
using namespace std;

class Hot {
public:
    Hot() {}
    friend ostream &operator<<(ostream &out, const Hot &) {
        return out << "hot";
    }
};

class Cold {
public:
    Cold() {}
    friend ostream &operator<<(ostream &out, const Cold &) {
        return out << "cold";
    }
};

class Degrees {
public:
    Degrees() {}
    Hot operator+() const {
        return Hot();
    }
    Cold operator-() const {
        return Cold();
    }
};

int main() {
    Degrees degrees;
    cout << +degrees << endl;
    cout << -degrees << endl;
}