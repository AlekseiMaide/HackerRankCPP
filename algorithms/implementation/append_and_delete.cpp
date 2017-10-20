//
// Append and delete.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s{};
    string s2{};
    int i{};
    int k{};
    int ops{};

    cin >> s >> s2 >> k;
    while(s[i] == s2[i]) i++;

    ops = s.length() + s2.length() - i * 2;

    (ops <= k && ops % 2 == k % 2) || s.size() + s2.size() < k ?
    cout << "Yes"
                                                               : cout << "No";

    return 0;
}