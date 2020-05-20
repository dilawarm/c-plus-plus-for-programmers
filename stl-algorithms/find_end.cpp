#include <iostream>
#include <vector>
using namespace std;

template <class ForwardIterator1, class ForwardIterator2, class UnaryPredicate>
ForwardIterator1 find_end(ForwardIterator1 first1, ForwardIterator1 last1, ForwardIterator2 first2, ForwardIterator2 last2, UnaryPredicate pred) {
    if (first2 == last2) return last1;

    ForwardIterator1 ret = last1;

    while (first1 != last1) {
        ForwardIterator1 it1 = first1;
        ForwardIterator2 it2 = first2;
        while (pred(*it1, *it2)) {
            ++it1; ++it2;
            if (it2 == last2) {
                ret = first1;
                break;
            }
            if (it1 == last1) return ret;
        }
        ++first1;
    }
    return ret;
}

int main() {
    vector<int> haystack = {1,2,3,4,5,1,2,3,4,5};
    vector<int> needle1 = {1,2,3};
    vector<int> needle2 = {2,3,4};

    vector<int>::iterator it = find_end(haystack.begin(), haystack.end(), needle1.begin(), needle1.end(), [](int i, int j) {
        return i==j;
        });
    if (it != haystack.end()) cout << "needle1 last found at position " << (it-haystack.begin()) << endl;

    it = find_end(haystack.begin(), haystack.end(), needle2.begin(), needle2.end(), [](int i, int j) {
        return i==j+1;
    });
    if (it != haystack.end()) cout << "needle2 last found at position " << (it-haystack.begin()) << endl;

    return 0;
}