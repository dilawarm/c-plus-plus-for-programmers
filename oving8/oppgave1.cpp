#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    cout << "Template-utgave: " << a << " == " << b << ": ";
    return a == b;
}

bool equal(double a, double b) {
    cout << "Spesialutgave: " << setprecision(10) <<  a << " == " << b << ": ";
    return fabs(a-b) < 0.00001;
}

int main() {
    int integer1, integer2;
    double d1, d2;
    string s1, s2;
    cout << "Skriv inn et heltall: "; cin >> integer1;
    cout << "Skriv inn et heltall: "; cin >> integer2;
    cout << "Skriv inn et flyttall: "; cin >> d1;
    cout << "Skriv inn et flyttall: "; cin >> d2;
    cout << "Skriv inn en streng: "; cin >> s1;
    cout << "Skriv inn en streng: "; cin >> s2;

    cout << equal(integer1, integer2) << endl;
    cout << equal(d1, d2) << endl;
    cout << equal(s1, s2) << endl;

    return 0;
}