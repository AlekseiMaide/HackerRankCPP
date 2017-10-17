//
// Find the Median.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int tmp{};
    vector<int> v{};

    cin >> n;

    while (cin >> tmp) {
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    cout << v[n/2];
    return 0;
}