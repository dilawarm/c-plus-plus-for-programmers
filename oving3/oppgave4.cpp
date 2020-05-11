#include <iostream>
#include <string>
using namespace std;

int main() {
    // Oppgave a
    string word1, word2, word3;
    cout << "Første ord: "; cin >> word1;
    cout << "Andre ord: "; cin >> word2;
    cout << "Tredje ord: "; cin >> word3;

    // Oppgave b
    string sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << "Setning: " << sentence << endl;

    // Oppgave c
    cout << "Lengden til første ord: " << word1.length() << endl;
    cout << "Lengden til andre ord: " << word2.length() << endl;
    cout << "Lengden til tredje ord: " << word3.length() << endl;
    cout << "Lengden til setningen: " << sentence.length() << endl;

    // Oppgave d
    string sentence2 = sentence;

    // Oppgave e
    if (sentence2.length() > 12) {
        sentence2.replace(10, 3, "xxx");
        cout << "Setning: " << sentence << endl;
        cout << "Kopi av setning: " << sentence2 << endl;
    }

    // Oppgave f
    if (sentence.length() > 4) {
        string sentence_start = sentence.substr(0, 5);
        cout << "Setning: " << sentence << endl;
        cout << "De fem første tegnene av setning: " << sentence_start << endl;
    }

    // Oppgave g
    if (sentence.find("hallo", 0) != string::npos) cout << "Setningen inneholder ordet \"hallo\"." << endl;
    else cout << "Setningen inneholder ikke ordet \"hallo\"." << endl;

    // Oppgave h
    size_t index = sentence.find("er", 0);
    while (index != string::npos) {
        cout << "\"er\" er funnet på indeks " << index << endl;
        index = sentence.find("er", index+1);
    }
}