#include <iostream>
#include <vector>
using namespace std;

template <class InputIterator, class Function>
Function for_each(InputIterator first, InputIterator last, Function fn) {
    while (first != last) {
        fn(*first);
        ++first;
    }
    return fn;
}

int main() {
    vector<int> vec = {10, 20, 30};

    cout << "vec contains:";
    for_each(vec.begin(), vec.end(), [](int i) {
        cout << " " << i;
    });
    cout << endl;
}