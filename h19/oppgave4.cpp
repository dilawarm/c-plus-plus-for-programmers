#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class Electric {
public:
    string type() const {
        return "electric";
    }
};

class Gasoline {
public:
    string type() const {
        return "gasoline";
    }
};

class Car {
public:
    virtual string brand() const = 0;

    friend ostream &operator<<(ostream &out, const Car &c) {
        return out << c.brand();
    }
};

template <class T>
class Saab : public Car {
public:
    string brand() const override {
        T t;
        return "Saab with " + t.type() + " engine";
    }
};

template <class T>
class Volvo : public Car {
public:
    string brand() const override {
        T t;
        return "Volvo with " + t.type() + " engine";
    }
};

int main() {
    vector<unique_ptr<Car>> cars;

    cars.emplace_back(new Saab<Electric>());
    cars.emplace_back(new Saab<Gasoline>());
    cars.emplace_back(new Volvo<Electric>());

    for (auto &car : cars) cout << *car << endl;
}