//
// Happy ladybugs.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int g{};
    int n{};
    int count{};
    bool instahappy{};
    bool happy{true};
    string s{};
    vector<int> v(31);

    cin >> g;

    while (g-- > 0) {
        cin >> n >> s;
        happy = true;
        count = 0;
        instahappy = true;
        v = vector<int> (31);
        for (int i = 0; i < n; i++) {
            v[s[i] - 65]++;
            if (i > 0) {
                if (!(s[i] == s[i - 1] || s[i] == s[i + 1])) {
                    instahappy = false;
                }
            }
        }

        for (int i = 0; i < 30; i++) {
            if (v[i] == 1) {
                happy = false;
                break;
            } else if (v[i] > 1) {
                count++;
            }
        }
        ((happy && (v[30] > 0 || count == 1)) || (instahappy && happy)) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}