#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void FloydWarshall(vector<vector<int>>&);

int main() {
    vector<vector<int>> G {
        {0, 4, 0, 2, 2, 0, 0, 0, 0},
        {0, 0, 7, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 1, 0},
        {0, 2, 0, 3, 0, 2, 0, 6, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 2},
        {0, 0, 0, 0, 0, 0, 0, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 5},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    FloydWarshall(G);
    for (auto &i: G) {
        for (auto &j: i)
            cout << j << setw(3);
        cout << "\n";
    }
    return 0;
}

void FloydWarshall(vector<vector<int>> &myG){

    int inf = 1000000000;
    size_t w = myG.size();
    vector<vector<int>> minP = myG;

    for (size_t i = 0; i < w; i++)
        for (size_t j = 0; j < w; j++)
            if (minP[i][j] == 0 && i != j)
                minP[i][j] = inf;
    for (size_t k = 0; k < w; k++)
        for (size_t i = 0; i < w; i++)
            for (size_t j = 0; j < w; j++)
                if (minP[i][k] + minP[k][j] < minP[i][j])
                    myG[i][j] = minP[i][k] + minP[k][j];
}