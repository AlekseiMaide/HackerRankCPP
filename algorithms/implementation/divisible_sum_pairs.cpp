//
// Divisible sum pairs.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int k{};
    int temp{};
    int count{};
    vector<int> v{};

    cin >> n >> k;
    while (cin >> temp) {
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if ((v[i] + v[j]) % k == 0) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}