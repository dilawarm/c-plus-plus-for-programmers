#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;

class Animal {
public:
    virtual string produce() const = 0;

    virtual ~Animal() {}
};

class Chicken : public Animal {
public:
    string produce() const override {
        return "egg";
    }
};

class Cow : public Animal {
public:
    string produce() const override {
        return "milk";
    }
};

class Sheep : public Animal {
public:
    string produce() const override {
        return "wool";
    }
};

class Farm {
public:
    vector<unique_ptr<Animal>> animals;
    Farm() {}
    void add_animal(const string &type) {
        if (type == "chicken") animals.emplace_back(make_unique<Chicken>());
        else if (type == "cow") animals.emplace_back(make_unique<Cow>());
        else if (type == "sheep") animals.emplace_back(make_unique<Sheep>());
        else return;
    }
};

int main() {
    Farm farm;
    farm.add_animal("chicken");
    farm.add_animal("chicken");
    farm.add_animal("chicken");
    farm.add_animal("cow");
    farm.add_animal("sheep");
    farm.add_animal("sheep");
    cout << "Farm production: " << endl;
    for (auto &animal : farm.animals) cout << animal->produce() << endl;
}