//
// HackerRank in A String.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int i{};
    string s{};
    string hackerrank{"hackerrank"};

    cin >> n;
    cin.ignore('256', '\n');

    while(getline(cin, s)) {
        i = 0;
        for (auto c : s) {
            if (c == hackerrank[i]) {
                i++;
            }
        }
        if (i == hackerrank.length()) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}