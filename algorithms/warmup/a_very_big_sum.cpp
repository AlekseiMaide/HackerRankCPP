//
// A very big sum.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n{};
    long sum{};
    while(cin.ignore() >> n) {
        sum += n;
    }
    cout << sum;
    return 0;
}