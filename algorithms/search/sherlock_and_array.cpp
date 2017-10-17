//
// Sherlock and array.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    int t{};
    int n{};
    int tmp{};
    bool exists{false};
    int sum{};
    int sum_left{};
    int sum_right{};
    vector<int> v{};

    cin >> t;

    while (t > 0) {
        cin >> n;
        v.clear();
        exists = false;

        for (int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }

        sum = accumulate(v.begin(), v.end(), 0);
        sum_left = v[0];
        sum_right = sum - v[0];

        if (n == 1) exists = true;

        if (n > 2 && !exists) {
            for (int i = 1; i < n; i++) {
                sum_right -= v[i];
                if (sum_left > sum_right) { break; }
                if (sum_left == sum_right) {
                    exists = true;
                    break;
                } else {
                    sum_left += v[i];
                }
            }
        }
        (exists) ? cout << "YES" << "\n" : cout << "NO" << "\n";
        t--;
    }

    return 0;
}