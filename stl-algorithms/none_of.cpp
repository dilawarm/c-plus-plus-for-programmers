#include <iostream>
#include <vector>
using namespace std;

template <class InputIterator, class UnaryPredicate>
bool none_of(InputIterator first, InputIterator last, UnaryPredicate pred) {
    while (first != last) {
        if (pred(*first)) return false;
        ++first;
    }
    return true;
}

int main() {
    vector<int> vec = {1,2,4,8,16,32,64,128};

    if (none_of(vec.begin(), vec.end(), [](int i) {
        return i < 0;
    })) cout << "There are no negative elements in the range" << endl;

    return 0;
}