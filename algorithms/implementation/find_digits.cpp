//
// Find digits.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void find_divisible(int x, int original, int &count) {
    if(x >= 10) {
        find_divisible(x / 10, original, count);
    }

    int digit = x % 10;

    if (digit != 0 && original % digit == 0) {
        count++;
    }
}

int main() {
    int n{};
    int count{};
    cin >> n;

    while (cin >> n) {
        find_divisible(n, n, count);
        cout << count << endl;
        count = 0;
    }

    return 0;
}