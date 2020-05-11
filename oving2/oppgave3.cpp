#include <iostream>
using namespace std;

int main() {
    char text[5];
    char *pointer = text; // char *pointer = &text[0];
    char search_for = 'e';
    cin >> text; // Må passe på at størrelsen til text er 5 eller mindre.
    while (*pointer != search_for) {
        *pointer = search_for; // Setter tegnet vi ser på lik e, så ender opp med eeeeeeeee....
        pointer++; // inkrementerer pekeren, dvs. går oppover
    }
    cout << text << endl;

    return 0;
}