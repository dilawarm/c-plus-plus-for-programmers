#pragma once

using namespace std;

template <typename Type1, typename Type2>

class Pair {
public:
    Type1 first;
    Type2 second;
    Pair(Type1 first_, Type2 second_) : first(first_), second(second_) {}
    bool operator>(const Pair &other) const {
        Type1 sum1 = first + static_cast<Type1>(second);
        Type2 sum2 = static_cast<Type2>(other.first) + other.second;
        return sum1 > sum2;
    }
    Pair operator+(const Pair &other) const {
        Type1 sum1 = first + other.first;
        Type2 sum2 = second + other.second;
        return Pair<Type1, Type2>(sum1, sum2);
    }
};