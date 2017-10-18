//
// Simple array sum.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int sum{};
    while (cin.ignore() >> n) {
        sum += n;
    }
    cout << sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}