#include <vector>
#include <random>

using namespace std;

size_t calcBinSearch(vector<int> &mas, int &r, int x) {
    size_t L = 0, R = mas.size(), q;
    do {
        q = (R + L) / 2;
        if (mas[q] > x)
            R = q;
        else
            L = q;
        r++;
    } while (L < R - 1);
    return L;
}