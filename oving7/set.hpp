#pragma once

#include <vector>
#include <iostream>
using namespace std;

class Set {
public:
    Set();
    Set operator+(const Set &other) const;
    Set &operator+=(int integer);
    Set &operator=(const Set &other);
    friend ostream &operator<<(ostream &stream, const Set &set);

private:
    vector<int> s;
};