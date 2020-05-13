#include <iostream>
#include <vector>
using namespace std;

template<class InputIterator, class UnaryPredicate>
bool all_of(InputIterator first, InputIterator last, UnaryPredicate pred) {
    while (first != last) {
        if (!pred(*first)) return false;
        ++first;
    }
    return true;
}

int main() {
    vector<int> vec = {3,5,7,11,13,17,19,23};
    if (all_of(vec.begin(), vec.end(), [](int i) {
        return i % 2;
    })) cout << "All the elements are odd numbers." << endl;
    else cout << "All the elements are not odd numbers." << endl;
}