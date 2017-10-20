//
// Cats and mouse.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int a{};
    int b{};
    int c{};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (abs(a - c) > abs(b - c)) {
            cout << "Cat B\n";
        } else if (abs(a - c) < abs(b - c)) {
            cout << "Cat A\n";
        } else {
            cout << "Mouse C\n";
        }
    }

    return 0;
}