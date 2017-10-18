//
// Birthday cake candles.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int count{};
    vector<int> v{};

    while (cin.ignore() >> n) {
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    double max = *max_element(v.begin(), v.end());

    for (int i = v.size() - 1; i > 0; i--) {

        if (v[i] == max) {
            count++;
        } else {
            break;
        }
    }

    cout << count;

    return 0;
}