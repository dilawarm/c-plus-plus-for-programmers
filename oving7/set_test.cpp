#include "set.hpp"
#include <iostream>
using namespace std;

int main() {
    Set a, b;
    cout << "Set a: " << a << endl;
    cout << "Set b: " << b << endl;

    a += 1; b += 1;
    a += 2; b += 2;
    a += 3; b += 3;
    a += 4;
    cout << "Set a: " << a << endl;
    cout << "Set b: " << b << endl;
    
    a += 4;
    cout << "Set a: " << a << endl;

    Set c = a + b;
    cout << "Set c: " << c << endl;

    c = b;
    cout << "Set c: " << c << endl;
}