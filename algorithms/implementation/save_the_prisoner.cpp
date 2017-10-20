//
// Save the prisoner.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t{};
    long n{};
    long m{};
    long s{};

    long a{};

    cin >> t;
    while (t-- > 0) {
        cin >> n >> m >> s;
        a = s + m - 1;
        (a > n) ? cout << ((a % n == 0) ? n : a % n) << endl : cout << a << endl;
    }

    return 0;
}