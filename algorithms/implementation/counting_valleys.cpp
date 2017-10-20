//
// Counting valleys.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int loc{};
    int prevLoc{0};
    int count{};
    string s{};

    cin >> n >> s;

    for (int i = 0; i < s.length(); i++) {
        prevLoc = loc;
        s[i] == 'D' ? loc-- : loc++;
        if (loc == -1 && prevLoc == 0) {
            count++;
        }
    }
    cout << count;

    return 0;
}