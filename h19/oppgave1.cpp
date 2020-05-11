#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void swap(int *c, int &d) {
    int t = *c;
    *c = d;
    d = t;
}

int main() {
    int a = 1, b = 2;

    swap(a, b);
    cout << a << ' ' << b << endl;

    swap(&a, &b);
    cout << a << ' ' << b << endl;

    auto c = &a;
    auto d = &b;
    swap(c, *d);
    cout << a << ' ' << b << endl;
}