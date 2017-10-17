//
// Camel Case
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s{};
    int upperCount{1};
    cin >> s;
    for (char c : s) {
        if (isupper(c)) {
            upperCount++;
        }
    }
    cout << upperCount;
    return 0;
}