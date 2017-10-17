//
// Counting Sort 1
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int temp{};

    cin >> n;

    vector<int> v(100);

    while (cin >> temp) {
        v[temp] += 1;
    }

    for (auto i : v) {
        cout << i << " ";
    }

    return 0;
}
