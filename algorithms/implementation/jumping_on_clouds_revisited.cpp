//
// Jumping on clouds:revisited.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int k{};
    int e{100};
    int tmp{};
    vector<int> v{};

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    if (v[0] == 1) e = e - 2;
    for (int i = k; i <= n; i += k) {
        if (v[i] == 1) {
            e = e - 2;
        }
        e--;
    }

    cout << e;

    return 0;
}