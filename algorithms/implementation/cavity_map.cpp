//
// Cavity map.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    string s{};

    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++) {
            arr[i][j] = (int)(s[j] - 48);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > 0 && j > 0 && i < n - 1 && j < n - 1) {
                if (arr[i][j] > arr[i - 1][j]
                    && arr[i][j] > arr[i + 1][j]
                    && arr[i][j] > arr[i][j - 1]
                    && arr[i][j] > arr[i][j + 1]) {
                    cout << 'X';
                    continue;
                }
            }
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}