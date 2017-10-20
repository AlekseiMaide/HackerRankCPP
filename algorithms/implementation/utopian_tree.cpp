//
// Utopian tree.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t{};
    int n{};
    int size{};

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        size = 1;
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                size = size * 2;
            } else if (j % 2 == 1) {
                size++;
            }
        }
        cout << size << "\n";
    }


    return 0;
}