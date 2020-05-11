#include <iostream>
#include <memory>
using namespace std;

int task2a(int a, int &b) {
    return ++a + b++;
}

int task2b(shared_ptr<int> d, unique_ptr<int> e) {
    return ++(*d) + (*e)++;
}

int main() {
    cout << "Oppgave 2a:" << endl;
    int a = 1, b = 1;
    int c = task2a(a, b);
    cout << a << b << c << endl; //123
    cout << endl;

    cout << "Oppgave 2b:" << endl;
    auto d = make_shared<int>(1);
    auto e = 1;
    int f = task2b(d, make_unique<int>(e)); //213
    cout << *d << e << f << endl;
}