//
// Quicksort 1 Partition.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int p{};
    int x{};

    cin >> n >> p;

    vector<int> left{};
    vector<int> right{};
    vector<int> equal{};

    equal.push_back(p);

    while (cin >> x) {
        if (x > p) {
            right.push_back(x);
        } else if (x < p) {
            left.push_back(x);
        } else {
            equal.push_back(x);
        }
    }

    for (auto z : left) {
        cout << z << " ";
    }
    for (auto z : equal) {
        cout << z << " ";
    }
    for (auto z : right) {
        cout << z << " ";
    }
    return 0;
}