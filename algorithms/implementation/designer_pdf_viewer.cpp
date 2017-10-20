//
// Designer PDF viewer.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int max{};
    string s{};
    vector<int> v{};

    for (int i = 0; i < 26; i++) {
        cin >> n;
        v.push_back(n);
    }

    cin >> s;

    for (auto c : s) {
        if (v[c - 97] > max) {
            max = v[c - 97];
        }
    }

    cout << max * s.size();
    return 0;
}