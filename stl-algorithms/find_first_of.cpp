#include <iostream>
#include <vector>
using namespace std;

template <class InputIterator, class ForwardIterator, class UnaryPredicate>
InputIterator find_first_of(InputIterator first1, InputIterator last1, ForwardIterator first2, ForwardIterator last2, UnaryPredicate pred) {
    while (first1 != last1) {
        for (ForwardIterator it = first2; it != last2; ++it) {
            if (pred(*it, *first1)) return first1;
        }
        ++first1;
    }
    return last1;
}

int main() {
    vector<char> haystack = {'a','b','c','A','B','C'};
    vector<char> needle = {'A', 'B', 'C'};

    vector<char>::iterator it = find_first_of(haystack.begin(), haystack.end(), needle.begin(), needle.end(), [](char a, char b) {
        return a == b;
    });
    if (it != haystack.end()) cout << "The first match is: " << *it << endl;

    it = find_first_of(haystack.begin(), haystack.end(), needle.begin(), needle.end(), [](char a, char b) {
        return tolower(a) == tolower(b);
    });
    if (it != haystack.end()) cout << "The first match is: " << *it << endl;

    return 0;
}