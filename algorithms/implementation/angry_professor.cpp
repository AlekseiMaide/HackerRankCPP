//
// Angry professor.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t{};
    int n{};
    int k{};
    int a{};
    int onTime{};

    cin >> t;

    for (int i = 0; i < t; i++) {
        onTime = 0;
        cin >> n >> k;

        for (int j = 0; j < n; j++) {
            cin >> a;
            if (a <= 0) {
                onTime++;
            }
        }
        (onTime >= k) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}