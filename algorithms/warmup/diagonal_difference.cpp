//
// Diagonal difference.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int x{};

    int d1{};
    int d2{};
    int iterCount{};
    int result{};

    cin >> n;

    vector<int> v{};

    while (cin >> x) {
        v.push_back(x);
    }

    for (int i = 0; iterCount < n; (i += n + 1)) {
        d1 += v[i];
        iterCount++;
    }

    iterCount = 0;
    for (int i = n - 1; iterCount < n; i += n - 1) {
        d2 += v[i];
        iterCount++;
    }

    result = abs(d1 - d2);
    cout << result;

    return 0;
}