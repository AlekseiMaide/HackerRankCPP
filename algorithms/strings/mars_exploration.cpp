//
// Mars Exploration.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i{0};
    string s{};
    int errors{};
    cin >> s;

    for (auto c : s) {
        if (i == 0 && c != 'S') {
            errors++;
        } else if (i == 1 && c != 'O') {
            errors++;
        } else if (i == 2 && c != 'S') {
            errors++;
        }

        if (i < 2) {
            i++;
        } else {
            i = 0;
        }
    }

    cout << errors;

    return 0;
}