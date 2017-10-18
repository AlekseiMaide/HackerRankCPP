//
// Plus minus.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int total{};
    double pos{};
    double neg{};
    double zero{};

    cin >> total;

    while (cin.ignore() >> n) {
        if (n > 0) {
            pos++;
        } else if (n < 0) {
            neg++;
        } else if (n == 0) {
            zero++;
        }
    }

    cout << pos/total << "\n";
    cout << neg/total << "\n";
    cout << zero/total << "\n";

    return 0;
}