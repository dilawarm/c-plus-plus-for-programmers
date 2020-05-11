#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {2, 5, 2, 5, 1, 5, 1};

    sort(vec.begin(), vec.end());

    cout << "a)" << endl;
    for (auto &e : vec) cout << e << endl;

    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << "b)" << endl;
    for (auto &e : vec) cout << e << endl;

    reverse(vec.begin(), vec.end());
    cout << "c)" << endl;
    for (auto &e : vec) cout << e << endl;
}