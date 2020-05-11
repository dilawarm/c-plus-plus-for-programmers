#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> v{3.1, 4.1, 5.9, 2.6, 5.3};

    cout << "Medlemsfunksjonen front() = " << v.front() << endl;
    cout << "Medlemsfunksjonen back() = " << v.back() << endl;

    v.emplace(v.begin()+1, 69);
    cout << "front() etter emplace() = " << v.front() << endl;

    double num;
    cout << "Søk etter "; cin >> num;
    vector<double>::iterator it = find(v.begin(), v.end(), num);
    if (it != v.end()) cout << "find() fant " << *it << endl;
    else cout << "find() fant ikke " << num << endl;

    return 0;
}