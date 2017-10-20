//
// Lisa's workbook.
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
    int h{};
    int tmp{};
    int page{1};
    int chapter{1};
    int count{};

    vector<int> v{};

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }


    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= v[i]; j++) {
            if (j == page) count++;
            h++;
            if (h == k && j != v[i]) {
                h = 0;
                page++;
            }
        }
        page++;
        h = 0;
    }

    cout << count;
    return 0;
}