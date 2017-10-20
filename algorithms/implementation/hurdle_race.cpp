//
// Hurdle race.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int k{};
    int beverages{};

    cin >> n >> k;

    while (cin >> n) {
        while (k < n) {
            k++;
            beverages++;
        }
    }

    cout << beverages;

    return 0;
}