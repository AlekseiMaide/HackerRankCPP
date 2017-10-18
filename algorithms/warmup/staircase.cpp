//
// Staircase.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    char space = ' ';
    char stair = '#';
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << string((n - 1 - i), space) << string((1 + i), stair) << "\n";
    }

    return 0;
}