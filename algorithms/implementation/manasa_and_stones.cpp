//
// Manasa and stones.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int t{};
    int n{};
    int a{};
    int b{};
    int i{};
    int j{};
    set<int> final{};
    int temp{};

    cin >> t;
    while (t-- > 0) {
        final.clear();
        cin >> n >> a >> b;
        int i = 0;
        int j = n - 1;
        for (int k = 0; k < n; k++) {
            temp = j * a + i * b;
            final.insert(temp);
            i++;
            j--;
        }

        for (auto e : final) {
            cout << e << " ";
        }
        cout << endl;
    }



    return 0;
}