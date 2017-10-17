//
// Counting Sort 2.
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

    for (int i = 0; i < 100; i++) {
        if (v[i] > 0) {
            for (int j = 0; j < v[i]; j++) {
                cout << i << " ";
            }
        }
    }

    return 0;
}