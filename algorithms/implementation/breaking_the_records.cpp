//
// Breaking the records.
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
    long max{};
    long min{};
    int maxC{};
    int minC{};

    vector<int> v{};

    cin >> n;
    while (cin >> x) {
        v.push_back(x);
    }

    max = v[0];
    min = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
            maxC++;
        }
        if (v[i] < min) {
            min = v[i];
            minC++;
        }
    }
    cout << maxC << " " << minC;

    return 0;
}
