#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// В глубину

int DFS(vector<vector<int>> &myG, int &s, int &u) {
    size_t n = myG.size();
    vector<bool> used(n, false);
    stack<int> S;
    S.push(s);
    used[s] = true;
    vector<int> D(n);
    while (!S.empty()) {
        size_t v = S.top();
        S.pop();
        auto first = myG[v].begin();
        auto last  = myG[v].end();
        while (first != last) {
            if (!used[*first]) {
                S.push(*first);
                used[*first] = true;
                D[*first] = D[v] + 1;
            }
            first++;
        }
    }
    return D[u];
}

int main() {
    vector<vector<int>> G {
            {1, 2, 3},
            {0, 4, 5}, {0, 6, 7}, {0, 8, 9},
            {1, 10, 11, 12}, {14, 13, 14}, {2, 15},
            {2, 16, 17}, {3}, {3, 18},
            {4}, {4}, {4, 19, 20}, {5}, {5}, {6, 21, 22, 23},
            {7, 24, 25}, {7, 26, 27}, {9, 28, 29},
            {12}, {12}, {15}, {15}, {15}, {16}, {16}, {17},
            {17}, {18}, {18}
    };

    int start, finish;
    cout << "Введите стартовую вершину => "; cin >> start;
    cout << "Введите конечную вершину => ";  cin >> finish;
    cout << "Длина /*кратчайшего*/ пути из вершины "
         << start
         << "\nв вершину "
         << finish
         << " равна "
         << DFS(G, start, finish)
         << endl;

    return 0;
}