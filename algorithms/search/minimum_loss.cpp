//
// Minimum loss.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n{};
    long tmp{};
    long min{numeric_limits<long>::max()};

    cin >> n;
    vector<pair<long, int> > v(n);

    for (long i = 0; i < n; i++) {
        cin >> tmp;
        v[i].first = tmp; //price
        v[i].second = i;  //year
    }

    sort(v.begin(), v.end());

    for (long i = 0; i < n - 1; i++) {
        if (v[i].second > v[i + 1].second) {
            if (v[i + 1].first - v[i].first < min) {
                min = v[i + 1].first - v[i].first;
            }
        }
    }

    cout << min;

    return 0;
}