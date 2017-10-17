//
// Super Reduced string.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char prev{};
    string s{};
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == prev) {
            s.erase((i - 1), 2);
            i -= 2;
        }
        prev = s[i];
    }
    if (s.length() == 0) {
        cout << "Empty String";
    } else {
        cout << s;
    }

    return 0;
}
