//
// Cut the sticks.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int tmp{};
    int cut{};
    vector<int> v{};

    cin >> n;

    while(cin >> tmp) {
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        if (cut < v[i]) {
            cut = v[i];
            cout << v.size() - i << "\n";
        }

    }
    return 0;
}