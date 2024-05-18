#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
// В ширину

void BFS(vector<vector<int>> &myG, int &s, int &fin) {
    size_t n = myG.size();
    queue<int> Q;
    Q.push(s);
    vector<bool> used(n, false);
    vector<int> P(n);
    used[s] = true;
    P[s] = -1;
    while (!Q.empty()) {
        int v = Q.front();
        Q.pop();
        for (size_t i=0; i < myG[v].size(); ++i) {
            int to = myG[v][i];
            if (!used[to]) {
                used[to] = true;
                Q.push(to);
                P[to] = v;
            }
        }
    }
    if (!used[fin])
        cout << "Пути нет!";
    else {
        vector<int> path;
        while (fin != -1) {
            path.push_back(fin);
            fin = P[fin];
        }
        auto first = path.crbegin();
        auto last  = path.crend();
        cout << "Путь: ";
        while (first != last)
            cout << *first++ << " ";
    }
}

int main() {
    vector<vector<int>> G {
        {1, 4, 5}, {0, 6}, {3, 5}, {2, 7},
        {0, 5, 9}, {0, 2, 4, 9, 10}, {1, 11}, {3, 10},
        {9, 13}, {4, 5, 10, 12}, {5, 7, 9, 15}, {6, 14},
        {9}, {8, 14}, {11, 13}, {10}
    };
    int start, finish;
    cout << "Введите стартовую вершину => "; cin >> start;
    cout << "Введите конечную вершину => ";  cin >> finish;
    BFS(G, start, finish);
    return 0;
}
