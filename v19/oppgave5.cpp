#include <iostream>
#include <string>
using namespace std;

class Meter {
public:
    const static int mult = 1;
};

class Kilometer {
public:
    const static int mult = 1000; 
};

template<class T>
class Distance {
public:
    int distance;

    Distance(int distance_) : distance(distance_ * T::mult) {}

    friend ostream &operator<<(ostream &out, const Distance &d) {
        return out << d.distance << "m";
    }

    Distance<T> &operator+=(int d) {
        this->distance += d * T::mult;
        return *this;
    }

    Distance<T> operator+(const Distance<Meter> &other) {
        Distance<T> dist = *this;
        dist.distance += other.distance;
        return dist;
    }
};

int main() {
    Distance<Meter> meters(2);
    meters += 3;
    Distance<Kilometer> kilometers(2);
    kilometers += 3;
    cout << "5 meters: " << meters << endl;
    cout << "5 kilometers: " << kilometers << endl;
    cout << "5 kilometers + 5 meters: " << kilometers + meters << endl;
}