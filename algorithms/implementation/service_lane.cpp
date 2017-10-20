//
// Service lane.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int t{};
    int i{};
    int j{};
    int tmp{};
    int lowest{numeric_limits<int>::max()};
    vector<int> v{};

    cin >> n >> t;

    for (int x = 0; x < n; x++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    while (cin >> i >> j) {
        lowest = numeric_limits<int>::max();
        for (int x = i; x <= j; x++) {
            if (v[x] < lowest) lowest = v[x];
        }
        cout << lowest << endl;
    }

    return 0;
}