//
// Strange counter.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n{};
    long time{};
    long value{3};
    long range{3};
    long multiplier{2};

    cin >> n;

    while(n > range) {
        range += 3 * multiplier;
        value *= 2;
        multiplier *= 2;
    }
    cout << value - (n - value + 2);


    return 0;
}