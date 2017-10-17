//
// Connected Cells in Grid.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void DFS(int i, int j, int n, int m, vector<vector<bool> > v, vector<vector<bool> > &visited, int &count) {
    if (v[i][j] == false || visited[i][j] == true) { return; }

    visited[i][j] = true;
    count++;
    //cout << i << " " << j << endl;

    if (j < m - 1) DFS(i, j + 1, n, m, v, visited, count);
    if (j > 0) DFS(i, j - 1, n, m, v, visited, count);
    if (i < n - 1) DFS(i + 1, j, n, m, v, visited, count);
    if (i > 0) DFS(i - 1, j, n, m, v, visited, count);
    if (i > 0 && j > 0) DFS(i - 1, j - 1, n, m, v, visited, count);
    if (i > 0 && j < m - 1) DFS(i - 1, j + 1, n, m, v, visited, count);
    if (i < n - 1 && j < m - 1 && j > 0) DFS(i + 1, j - 1, n, m, v, visited, count);
    if (i < n - 1 && j < m - 1) DFS(i + 1, j + 1, n, m, v, visited, count);
}

int main() {
    int n{};
    int m{};
    int count{};
    int max{};
    int tmp{};

    cin >> n >> m;

    vector< vector<bool>> v(n, vector<bool> (m));
    vector< vector<bool>> visited(n, vector<bool> (m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            v[i][j] = tmp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            DFS(i, j, n, m, v, visited, count);
            if (count > max) max = count;
            count = 0;
        }
    }

    cout << max;

    return 0;
}