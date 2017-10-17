//
// Pairs.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n{};
    long k{};
    long j{};
    long tmp{};
    long count{};
    cin >> n >> k;
    vector<long> v{};

    while(cin >> tmp) {
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    for (long i = 0; i < v.size() - 1; i++) {
        j = i + 1;
        while (v[j] - v[i] <= k && j < v.size()) {
            if (v[j] - v[i] == k) {
                count++;
            }
            j++;
        }

    }

    cout << count;


    return 0;
}