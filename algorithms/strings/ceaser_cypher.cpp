//
// Ceaser Cypher.
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
    char x{};
    string s{};

    cin >> n >> s >> k;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            if (s[i] + (k % 26) <= 90) {
                s[i] += (k % 26);
            } else {
                s[i] = s[i] + (k % 26) - 26;
            }
        } else if (s[i] >= 97 && s[i] <= 122) {
            if (s[i] + (k % 26) <= 122) {
                s[i] += (k % 26);
            } else {
                s[i] = s[i] + (k % 26) - 26;
            }
        }
    }


    cout << s;
    return 0;
}