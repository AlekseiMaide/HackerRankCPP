//
// Equalize the array.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    int n{};
    int sum{};
    int max{};
    cin >> n;

    int tmp{};
    vector<int> v(101);

    while (cin >> tmp) {
        v[tmp]++;
    }

    sort(v.begin(), v.end());
    sum = accumulate(v.begin(), v.end(), 0);
    cout << sum - v[100];


    return 0;
}