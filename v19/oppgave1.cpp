#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Oppgave 1a:" << endl;
    vector<vector<int>> numbers = {{1, 2, 3}, {5, 4}};
    for (auto &e1 : numbers) {
        for (auto &e2 : e1) {
            cout << e2 << endl; 
        }
    }
    cout << endl;

    cout << "Oppgave 1b:" << endl;
    auto e1 = &numbers[0][1];
    cout << *e1 << endl; // 2
    e1++;
    cout << e1[0] << endl; // 3
    cout << e1 << endl; // Adressen til e1
}