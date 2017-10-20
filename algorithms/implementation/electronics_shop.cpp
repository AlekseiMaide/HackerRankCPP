//
// Electronics shop.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s{};
    int n{};
    int m{};
    int temp{};
    int max{};
    vector<int> nv{};
    vector<int> mv{};

    cin >> s >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        nv.push_back(temp);
    }

    for (int i = 0; i < m; i++) {
        cin >> temp;
        for (int j = 0; j < nv.size(); j++) {
            if (nv[j] + temp > max && nv[j] + temp <= s) {
                max = nv[j] + temp;
            }
        }
    }

    if (max > 0) {
        cout << max;
    } else {
        cout << -1;
    }

    return 0;
}