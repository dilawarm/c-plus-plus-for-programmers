#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "Oppgave 5a:" << endl;
    vector<int> v1 = {1, 2};
    vector<int> v2 = {3, 4};
    copy(v2.begin(), v2.end(), v1.begin()+2);
    for (auto e : v1) cout << e << endl; // Har ikke resiza v1, så utkriften blir 1\n2
    cout << endl;

    cout << "Oppgave 5b:" << endl;
    v1.insert(v1.end(), v2.begin(), v2.begin()+1);
    for (auto e : v1) cout << e << endl; // Legg til intervallet [0, 1> i v2 som siste element i v1, så utskriften blir 1\n2\n3
    cout << endl;

    cout << "Oppgave 5c:" << endl;
    v1 = {1, 2, 3, 4};
    cout << *find_if(v1.begin(), v1.end(), [](int e) {
        return e > 2;
    }) << endl;
    cout << endl; // Finn første verdi større enn 2, som er 3. Utskrift: 3

    cout << "Oppgave 5d:" << endl;
    v1 = {1, 2};
    cout << equal(v1.begin(), v1.end(), v2.begin(), [](int e1, int e2) {
        return e1 == e2 - 2;
    }) << endl;
    cout << endl; // Er v1[i] == v2[i]-2 like i intervallet [0, 1] i v1? Ja. Utskrift: 1 (true)

    cout << "Oppgave 5e:" << endl;
    cout << equal(v2.begin(), v2.end(), v1.begin(), [](int e1, int e2) {
        return e1 == e2 + 2;
    }) << endl; // Er v2[i] == v1[i]+2 like i intervallet [0, 1] i v2? Ja. Utskrift: 1 (true)
}