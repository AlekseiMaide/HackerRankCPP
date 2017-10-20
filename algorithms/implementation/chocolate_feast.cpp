//
// Chocolate feast.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void exWrappers(int exrate, int wrappers, int &eaten) {
    if (wrappers / exrate == 0) return;
    int tmp{};
    tmp = eaten;
    eaten += wrappers / exrate;
    wrappers = eaten - tmp + wrappers % exrate;

    exWrappers(exrate, wrappers, eaten);
}

int main() {
    int t{};
    int n{};
    int c{};
    int m{};
    int w{};
    int eaten{};

    cin >> t;

    while (t-- > 0) {
        eaten = 0;
        cin >> n >> c >> m;

        w = n / c;
        eaten += w;
        exWrappers(m, w, eaten);
        cout << eaten << "\n";
    }
    return 0;
}