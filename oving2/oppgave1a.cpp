#include <iostream>
using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "i: " << "Adresse: " << &i << ", Innhold: " << i << endl;
    cout << "j: " << "Adresse: " << &j << ", Innhold: " << j << endl;
    cout << "p: " << "Adresse: " << &p << ", Innhold: " << p << endl;
    cout << "q: " << "Adresse: " << &q << ", Innhold: " << q << endl;

    return 0;
}