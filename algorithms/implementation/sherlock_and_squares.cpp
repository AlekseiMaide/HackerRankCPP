//
// Sherlock and squares.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    double a{};
    double b{};
    int count{};

    cin >> n;

    for (int i = 0; i < n; i++) {
        count = 0;
        cin >> a >> b;
        while (a <= b) {
            if (pow(a, 0.5) == (int)pow(a, 0.5)) {
                count++;
                a = a + pow(a, 0.5) * 2 + 1;
            } else {
                a++;
            }

        }
        cout << count << "\n";
    }
    return 0;
}