//
// Picking numbers.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int max{};
    int temp{};
    int upper{};
    int lower{};
    vector<int> v{};

    cin >> temp;
    while (cin >> temp) {
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        lower = 0;
        upper = 0;
        for (int j = 0; j < v.size(); j++) {
            temp = v[i] - v[j];
            if (temp == 0 || temp == 1) {
                lower++;
            }
            if (temp == 0 || temp == -1) {
                upper++;
            }

            if (max < lower) {
                max = lower;
            }
            if (max < upper) {
                max = upper;
            }
        }
    }

    cout << max;



    return 0;
}