//
// Encryption.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s{};
    int ceil{};
    cin >> s;
    float root = sqrt((float)s.length());
    int floor = (int)root;

    if (floor * floor == s.length()) {
        ceil = floor;
    } else {
        ceil = floor + 1;
    }

    for (int i = 0; i < ceil; i++) {
        for (int j = i; j < s.length(); j += ceil) {
            cout << s[j];
        }
        cout << " ";
    }

    return 0;
}