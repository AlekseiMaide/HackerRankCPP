//
// Drawing book.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int p{};
    int count{};

    cin >> n >> p;

    (p <= n /2) ?
            count = (p % 2 == 0) ? p / 2 : (p - 1) / 2 :
            count = ((n - p) % 2 == 1) ? (n - 1 - p) / 2 + (p % 2 == 1 ? 1 : 0): (n - p) / 2;

    cout << count;

    return 0;
}