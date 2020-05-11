#include "circle.hpp"
#include <iostream>
using namespace std;

int main() {
    Circle circle(5);

    cout << "Arealet er lik " << circle.get_area() << endl;

    double circumference = circle.get_circumference();
    cout << "Omkretsen er lik " << circumference << endl;

    return 0;
}