#include <iostream>
using namespace std;

const int SIZE = 20;

int find_sum(const int *table, int length);

int main() {
    int table[SIZE];
    for (int i = 0; i < SIZE; ++i) table[i] = i+1;
    
    cout << "Summen av de 10 første tallene = " << find_sum(table, 10) << endl;
    cout << "Summen av de 5 neste tallene = " << find_sum(&table[10], 5) << endl;
    cout << "Summen av de 5 siste tallene = " << find_sum(&table[15], 5) << endl;
}

int find_sum(const int *table, int length) {
    int sum = 0;
    for (int i = 0; i < length; ++i) sum += table[i];
    return sum;
}