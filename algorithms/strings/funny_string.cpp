//
// Funny String.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int i{1};
    string s{};

    cin >> n;

    while (cin >> s) {
        i = 1;
        while (abs(s[i] - s[i - 1]) == abs(s[s.length() - i - 1] - s[s.length() - i])) {
            i++;
        }
        (i == s.length()) ? cout << "Funny" << "\n" : cout << "Not Funny" << "\n";
    }
    return 0;
}