//
// Beautiful days at movies.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverseNumber(int n) {
    int reversedNumber{};
    int remainder{};

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    return reversedNumber;
}

int main() {
    int i{};
    int j{};
    int k{};
    int days{};

    cin >> i >> j >> k;

    while (i <= j) {
        if (abs(i - reverseNumber(i)) % k == 0) days++;
        i++;
    }

    cout << days;


    return 0;
}