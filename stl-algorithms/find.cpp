#include <iostream>
#include <vector>
using namespace std;

template <class InputIterator, class T>
InputIterator find(InputIterator first, InputIterator last, const T &val) {
    while (first != last) {
        if (*first == val) return first;
        ++first;
    }
    return last;
}

int main() {
    vector<int> vec = {10, 20, 30, 40};

    vector<int>::iterator it = find(vec.begin(), vec.end(), 30);
    if (it != vec.end()) cout << "Element found in vec: " << *it << endl;
    else cout << "Element not found in vec." << endl;

    return 0;
}