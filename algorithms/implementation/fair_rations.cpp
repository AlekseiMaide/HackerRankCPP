//
// Fair rations.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int tmp{};
    int total{};
    int count{};
    int odd{};

    cin >> n;

    while (cin >> tmp) {
        if (tmp % 2 == 1) {
            odd++;
        }
        if (odd % 2 == 1) {
            count++;
        } else if (odd % 2 == 0) {
            total += count;
            count = 0;
        }
    }

    if (odd % 2 == 0) {
        cout << total * 2;
    } else {
        cout << "NO";
    }

    return 0;
}