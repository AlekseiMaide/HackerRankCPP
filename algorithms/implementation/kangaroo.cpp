//
// Kangaroo.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1{};
    int x2{};
    int v1{};
    int v2{};
    int k{1};

    cin >> x1 >> v1 >> x2 >> v2;

    if (v1 == v2) {
        cout << "NO";
        return 0;
    }

    while (x1 != x2) {
        if ((x1 > x2 && v1 > v2) || (x2 > x1 && v2 > v1)) {
            cout << "NO";
            break;
        }
        x1 += v1;
        x2 += v2;
        if (x1 == x2) {
            cout << "YES";
            break;
        }
    }

    return 0;
}
