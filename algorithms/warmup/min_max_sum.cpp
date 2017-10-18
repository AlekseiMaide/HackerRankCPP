//
// Min max sum.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n{};
    long max{};
    long min{};
    long sum{};

    while(cin >> n) {
        if (max < n) {
            max = n;
        }
        if (min > n || min == 0) {
            min = n;
        }
        sum += n;
    }

    cout << sum - max << " " << sum - min;
    return 0;
}