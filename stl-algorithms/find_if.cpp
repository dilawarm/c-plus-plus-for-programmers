#include <iostream>
#include <vector>
using namespace std;

template <class InputIterator, class UnaryPredicate>
InputIterator find_if(InputIterator first, InputIterator last, UnaryPredicate pred) {
    while (first != last) {
        if (pred(*first)) return first;
        ++first;
    }
    return last;
}

int main() {
    vector<int> vec = {10, 25, 40, 55};

    vector<int>::iterator it = find_if(vec.begin(), vec.end(), [](int i) {
        return i % 2;
    });
    if (it != vec.end()) cout << "The first odd value is " << *it << endl;

    return 0;
}