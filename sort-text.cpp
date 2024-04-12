#include "head.h"
#include <vector>
#include <chrono>
#include <random>
using namespace std;
using namespace chrono;

int Rnd (int a, int b) {
    int seed = system_clock::now().time_since_epoch().count();
    static default_random_engine rnd(seed);
    static uniform_int_distribution<int> d(a, b);
    return d(rnd);
}
double Rnd (double a, double b) {
    int seed = system_clock::now().time_since_epoch().count();
    static default_random_engine rnd(seed);
    static uniform_real_distribution<double> d(a, b);
    return d(rnd);
}

void calcSortBubble(std::vector<int> &mas, int &r) {
    for (size_t i = 0; i < mas.size() - 2; i++)
        for (size_t j = 0; j < mas.size() - i - 1; j++) {
            r++;
            if (mas[j] > mas[j + 1]) {
                int buf = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = buf;
            }
        }
}
 
void calcSortBubble(vector<double> &mas, int &r) {
    for (size_t i = 0; i < mas.size() - 2; i++)
        for (size_t j = 0; j < mas.size() - i - 1; j++) {
            r++;
            if (mas[j] > mas[j + 1]) {
                double buf = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = buf;
            }
        }
}