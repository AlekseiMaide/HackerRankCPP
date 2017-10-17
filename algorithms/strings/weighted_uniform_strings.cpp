//
// Weighted Uniform Strings.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s{};
    int n{};
    int x{};

    int weight{};
    char prev{'1'};
    int multiplier{1};
    vector<bool> vb(1000*1000*10);

    cin >> s >> n;

    for (int i = 0; i < s.length(); i++) {
        weight = s[i] - 'a' + 1;
        if (s[i] == prev) {
            multiplier++;
            weight *= multiplier;
        } else {
            multiplier = 1;
        }
        prev = s[i];
        vb[weight] = true;
    }

    for (int i = 0; i < n; i++) {
        cin >> x;
        (vb[x]) ? cout << "Yes" << endl : cout << "No" << endl;
    }

    return 0;
}