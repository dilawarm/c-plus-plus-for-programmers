#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int &b = a; // Refereanse til a, lik adresse og lik verdi.
    int *c; // Deklarerer en peker
    c = &b; // Peker til adressen til b, som også er adressen til a. 
    a = b + *c;
    b = 2;
}