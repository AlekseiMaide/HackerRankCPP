//
// Beautiful triplets.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int d{};
    int j{1};
    int tmp{};
    int count{};
    vector<int> v{};

    cin >> n >> d;

    while (cin >> tmp) {
        v.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        j = i + 1;
        while (j < n && v[j] - v[i] <= d) {
            if (v[j] - v[i] == d && find(v.begin(), v.end(), (v[j] + d)) != v.end()) {
                count++;
            }
            j++;
        }
    }

    cout << count;

    return 0;
}