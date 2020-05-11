#include "set.hpp"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

Set::Set() {}

Set Set::operator+(const Set &other) const {
    Set set = *this;
    for (size_t i = 0; i < other.s.size(); ++i) set += other.s[i];
    return set;
}

Set &Set::operator+=(int integer) {
    auto it = find(this->s.begin(), this->s.end(), integer);
    if (it != this->s.end()) return *this;
    else {
        this->s.emplace_back(integer);
        return *this;
    }
}

Set &Set::operator=(const Set &other) {
    s = other.s;
    return *this;
}

ostream &operator<<(ostream &stream, const Set &set) {
    if (set.s.size() == 0) return stream << "{}";
    stream << "{";
    for (size_t i = 0; i < set.s.size()-1; ++i) stream << set.s[i] << ", ";
    stream << set.s[set.s.size()-1] << "}";
    return stream;
}