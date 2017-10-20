//
// Sock merchant.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int temp{};
    int total{};
    cin >> temp;
    vector<int> v(101);

    while (cin >> temp) {
        v[temp]++;
    }

    for (auto e : v) {
        total += (e % 2 == 0 || (e - 1) % 2 == 0) ? e/2 : 0;
    }

    cout << total;

    return 0;
}