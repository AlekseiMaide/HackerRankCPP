//
// Insertion Sort Part 1
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int i{};
    int temp{};
    vector<int> v{};

    cin >> n;
    i = n - 1;

    while (cin >> temp) {
        v.push_back(temp);
    }

    temp = v[i];
    while (v[i - 1] >= temp) {
        v[i] = v[i - 1];
        for (auto m : v) {
            cout << m << " ";
        }
        cout << "\n";
        i--;
    }
    v[i] = temp;

    for (auto m : v) {
        cout << m << " ";
    }

    return 0;
}