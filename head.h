#ifndef SORTTEXT_H
#define SORTTEXT_H
 
#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;

int Rnd (int, int);
double Rnd (double, double);

void calcSortBubble(std::vector<int> &, int&);
void calcSortBubble(std::vector<double>&, int&);

template <typename T, typename Arg>
void init_array(size_t s, T a, T b, Arg& arg) {
    if (!arg.empty()) arg.clear();
    arg.reserve(s);
    for (size_t i = 0; i < s; i++) {
        arg.push_back(Rnd(a, b));
    }
}

template <typename Arg>
void print_array(bool flag, Arg& arg) {
    if (flag) {
        cout.precision(2);
        for (auto r : arg)
            cout << r << setw(4);
        cout << endl;
    } else {
        for (auto r : arg)
            cout << r << setw(3);
        cout << endl;
    }
}
 
#endif