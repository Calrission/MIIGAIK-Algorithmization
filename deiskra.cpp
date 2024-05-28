#include <iostream>
#include <vector>
using namespace std;

void Dijkstra(vector<vector<pair<int, int>>>&, int&);

int main() {
    vector<vector<pair<int, int>>> G {
        { {1, 1}, {3, 6} },
        { {0, 1}, {2, 4}, {3, 3}, {4, 9}, {5, 8}, {6, 7} },
        { {0, 6}, {1, 4} },
        { {1, 3}, {4, 2} },
        { {3, 2}, {1, 9} },
        { {1, 8}, {6, 5} },
        { {1, 7}, {5, 5} }
    };
    int vortex;
    cout << "Введите номер вершины: ";
    cin >> vortex;
    Dijkstra(G, vortex);

    return 0;
}

void Dijkstra(vector<vector<pair<int, int>>> &myG, int &s) {
    const int inf = 2000000000;
    size_t n = myG.size();
    vector<size_t> D(n, inf);
    vector<size_t> P(n);
    vector<bool> U(n, false);
    D[s] = 0;
    for (size_t i = 0; i < n; i++) {
        size_t v = 1000000000;
        for (size_t j = 0; j < n; j++)
            if (!U[j] && (v == 1000000000 || D[j] < D[v]))
                v = j;
        if (D[v] == inf)
            break;
        U[v] = true;
        auto beg = myG[v].begin();
        auto lst = myG[v].end();
        while (beg != lst) {
            auto to = beg -> first;
            auto len = beg -> second;
            if (D[v] + len < D[to]) {
                D[to] = D[v] + len;
                P[to] = v;
            }
            beg++;
        }
    }
    for (auto &r : D)
        cout << r << " ";
    cout << endl;
}