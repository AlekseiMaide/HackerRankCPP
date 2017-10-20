//
// Flatland spacestations.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int m{};

    cin >> n >> m;

    if (n == m) {
        cout << 0 << "\n";
    } else if (n - m == 1 && n != 1) {
        cout << 1 << "\n";
    } else {
        int tmp{};
        int max{numeric_limits<int>::min()};
        vector<int> v{};

        while (cin >> tmp) {
            v.push_back(tmp);
        }

        sort(v.begin(), v.end());

        for (int i = 1; i < v.size(); i++) {
            if ((v[i] - v[i - 1]) / 2 > max) {
                max = (v[i] - v[i - 1]) / 2;
            }
        }

        if (n - v[v.size() - 1] - 1 > max) {
            max = n - v[v.size() - 1] - 1;
        }
        if (v[0] > max) {
            max = v[0];
        }
        cout << max << "\n";

    }

    return 0;
}