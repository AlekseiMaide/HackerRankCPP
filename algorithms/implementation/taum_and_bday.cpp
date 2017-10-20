//
// Taum and bday.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t{};
    long a{};
    long b{};
    long x{};
    long y{};
    long z{};

    cin >> t;

    while (t-- > 0) {
        cin >> a >> b >> x >> y >> z;

        if (x == y) {
            cout << (a + b) * x << "\n";
        } else if (abs(x - y) > z) {
            (x > y) ? cout << (a + b) * y + a * z << "\n" : cout << (a + b) * x + b * z << "\n";
        } else {
            cout << a * x + b * y << "\n";
        }
    }
    return 0;
}