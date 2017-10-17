//
// Panagrams.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <typeinfo>
using namespace std;


int main() {
    set<int> set{};
    string s{};

    while (cin >> s) {
        for (auto c : s) {
            set.insert(tolower(c));
        }
    }

    if (set.size() == 26) {
        cout << "pangram";
    } else {
        cout << "not pangram";
    }

    return 0;
}