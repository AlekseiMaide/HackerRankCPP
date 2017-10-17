//
// Insertion Sort Part 2
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

    while (cin >> temp) {
        v.push_back(temp);
    }


    for (int j = 1; j < v.size(); j++) {
        temp = v[j];
        i = j;
        while (v[i - 1] > temp) {
            v[i] = v[i - 1];
            i--;
        }
        v[i] = temp;

        for (auto m : v) {
            cout << m << " ";
        }
        cout << "\n";
    }

    return 0;
}

