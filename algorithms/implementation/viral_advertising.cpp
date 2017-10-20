//
// Viral advertising.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int nodes{2};
    int likes{2};

    cin >> n;

    for (int i = 1; i < n; i++) {
        nodes = nodes * 3 / 2;
        likes += nodes;
    }

    cout << likes << "\n";

    return 0;
}