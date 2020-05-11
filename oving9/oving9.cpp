#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

ostream &operator<<(ostream &out, const vector<int> &v) {
    for (size_t i = 0; i < v.size(); ++i) out << v[i] << " ";
    return out;
}

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    vector<int> v2 = {2, 3, 12, 14, 24};

    auto it = find_if(v1.begin(), v1.end(), [](int a) {
        return a > 15;
    });
    if (it != v1.end()) cout << *it << " er første element i v1 som er større enn 15." << endl;
    else cout << "Ingen element i v1 er større enn 15." << endl;

    bool eq = equal(v1.begin(), v1.begin()+5, v2.begin(), [](int a, int b) {
        return abs(a-b) < 3;
    });
    if (eq) cout << "v1 og v2 er omtrent like i intervallet [v1.begin(), v1.begin()+5>" << endl;
    else cout << "v1 og v2 er ikke omtrent like i intervallet [v1.begin(), v1.begin()+5>" << endl;

    eq = equal(v1.begin(), v1.begin()+4, v2.begin(), [](int a, int b) {
        return abs(a-b) < 3;
    });
    if (eq) cout << "v1 og v2 er omtrent like i intervallet [v1.begin(), v1.begin()+4>" << endl;
    else cout << "v1 og v2 er ikke omtrent like i intervallet [v1.begin(), v1.begin()+4>" << endl;

    cout << "v1 før replace_copy_if: " << v1 << endl;
    replace_copy_if(v1.begin(), v1.end(), v1.begin(), [](int a) {
        return a % 2 == 1;
    }, 100);
    cout << "v1 etter replace_copy_if: " << v1 << endl;

    return 0;
}