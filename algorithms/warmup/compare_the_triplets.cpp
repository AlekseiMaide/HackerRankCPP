//
// Compare the triplets.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    vector<int> temp{};

    while(cin >> n) {
        temp.push_back(n);
    }

    size_t const half_size = temp.size() / 2;
    vector<int> a(temp.begin(), temp.begin() + half_size);
    vector<int> b(temp.begin() + half_size, temp.end());

    int a_score{};
    int b_score{};

    for (int i = 0; i < half_size; i++) {
        if (a[i] > b[i]) {
            a_score += 1;
        } else if (a[i] < b[i]) {
            b_score += 1;
        }
    }
    cout << a_score << " " << b_score;
    return 0;
}