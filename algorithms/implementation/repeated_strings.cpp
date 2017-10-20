//
// Repeated strings.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n{};
    long count{};
    long rem_count{};
    long remainder{};
    string s{};

    cin >> s >> n;

    //count the number of A's in the string and total letters, then divide n by letters and multiply by a_count

    for (auto c : s) {
        if (c == 'a') count++;
    }

    //count A's in the remainder
    remainder = n % s.length();

    if (remainder > 0) {
        for (int i = 0; i < remainder; i++) {
            if (s[i] == 'a') rem_count++;
        }
    }

    cout << n / s.length() * count + rem_count;

    return 0;
}