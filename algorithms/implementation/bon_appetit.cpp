//
// Bon appetit.
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
    int sum{};
    int temp{};

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (i != k) {
            sum += temp;
        }
    }

    cin >> temp;
    if (temp == sum/2) {
        cout << "Bon Appetit";
    } else {
        cout << temp - sum/2;
    }

    return 0;
}