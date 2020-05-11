#include <iostream>
using namespace std;

int main() {
    double number; // Definerer variabelen "double number".
    double *pointer = &number; // Definerer en peker som skal peke til number.
    double &reference = number; // Definerer en referanse som skal referere til number.

    reference = 69;
    cout << &number << " " << number << endl;
    cout << &pointer << " " << pointer << endl;
    cout << &reference << " " << reference << endl;
}