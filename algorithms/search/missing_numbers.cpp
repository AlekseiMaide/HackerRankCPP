//
// Missing numbers.
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
    int m{};
    int tmp{};
    int tmp2{};
    int max{};
    int min{};
    vector<int> a{};
    vector<int> b{};
    set<int> set{};
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> tmp;
        b.push_back(tmp);
    }

    min = *min_element(b.begin(), b.end());

    vector<int> ac(101);
    vector<int> bc(101);

    for (int i = 0; i < n; i++) {
        ac[a[i] - min]++;
    }

    for (int i = 0; i < m; i++) {
        bc[b[i] - min]++;
    }

    for (int i = 0; i < 101; i++) {
        if (ac[i] != bc[i]) {
            cout << i + min << " ";
        }
    }

    return 0;
}