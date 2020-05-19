#include <iostream>
#include <vector>
using namespace std;

template <class InputIterator, class UnaryPredicate>
InputIterator find_if_not(InputIterator first, InputIterator last, UnaryPredicate pred) {
    while (first != last) {
        if (!pred(*first)) return first;
        ++first;
    }
    return last;
}

int main() {
    vector<int> vec = {1,2,3,4,5};

    vector<int>::iterator it = find_if_not(vec.begin(), vec.end(), [](int i) {
        return i % 2;
    });
    if (it != vec.end()) cout << "The first even value is " << *it << endl;

    return 0;
}