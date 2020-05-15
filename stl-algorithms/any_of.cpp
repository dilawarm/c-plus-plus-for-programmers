#include <iostream>
#include <vector>
using namespace std;

template<class InputIterator, class UnaryPredicate>
bool any_of(InputIterator first, InputIterator last, UnaryPredicate pred) {
    while (first != last) {
        if (pred(*first)) return true;
        ++first;
    }
    return false;
}

int main() {
    vector<int> vec = {0,1,-1,3,-3,5,-5};
    
    if (any_of(vec.begin(), vec.end(), [](int i) {
        return i < 0;
    })) cout << "There are negative elements in the range." << endl;

    return 0;
}