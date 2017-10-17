//
// Gemstones.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n{};
    string s{};
    int count{};
    set<int> set{};
    vector<int> v(26);

    cin >> n;

    while (cin >> s) {
        for (auto c : s) {
            set.insert(c);
        }
        for (auto c : set) {
            v[c - 97]++;
        }
        set.clear();
    }

    for (auto e : v) {
        if (e == n) {
            count++;
        }
    }

    cout << count;
    return 0;
}