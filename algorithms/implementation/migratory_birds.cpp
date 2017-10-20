//
// Migratory birds.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int max{};
    int maxIndex{};
    int temp{};

    vector<int> v(6);

    cin >> temp;

    while (cin >> temp) {
        v[temp]++;
    }

    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
            maxIndex = i;
        }
    }
    cout << maxIndex;

    return 0;
}