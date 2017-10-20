//
// Minimum distances.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int j{};
    int tmp{};
    int min{numeric_limits<int>::max()};
    vector<int> v{};

    cin >> n;

    while (cin >> tmp) {
        v.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && v[i] == v[j] && abs(i - j) < min) {
                min = abs(i - j);
            }
        }
    }

    (min != 2147483647) ? cout << min : cout << -1;

    return 0;
}