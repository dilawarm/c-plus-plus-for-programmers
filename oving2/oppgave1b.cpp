#include <iostream>
using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    *p = 7; // Pekeren p peker på adressen til i. Denne setningen endrer verdien til i, så i = 7.
    *q += 4; // Samme argument som ovenfor, bare med q og j. j endrer verdi til j =5+4 = 9.
    *q = *p + 1; // Endrer verdien til j slik at den blir 7 + 1 = 8.
    p = q; // Nå peker p på det q peker på, altså peker både p og q på j nå.
    cout << *p << " " << *q << endl; // Utskrift: 8 8
}