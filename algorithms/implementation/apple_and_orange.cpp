//
// Apple and orange.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int s{}, t{}, a{}, b{}, m{}, n{};

    scanf("%d %d %d %d %d %d",&s, &t, &a, &b, &m, &n);

    vector<int> apples(m);
    vector<int> oranges(n);
    int apple_count{};
    int orange_count{};

    for (int i = 0; i < m; i++) {
        cin >> apples[i];
        if (a + apples[i] >= s && a + apples[i] <= t) {
            apple_count++;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
        if (b + oranges[i] >= s && b + oranges[i] <= t) {
            orange_count++;
        }
    }

    cout << apple_count << "\n" << orange_count;

    return 0;
}