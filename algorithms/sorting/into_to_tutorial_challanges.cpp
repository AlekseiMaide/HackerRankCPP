//
// Into to tutorial challanges.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x{};
    int n{};
    int v{};

    cin >> v >> n;

    vector<int> ar{};

    while (cin >> x) {
        ar.push_back(x);
    }
    for (int i = 0; i < ar.size(); i++) {
        if (ar[i] == v) {
            cout << i;
            break;
        }
    }
    return 0;
}
