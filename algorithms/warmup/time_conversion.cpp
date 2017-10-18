//
// Time conversion.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<string> split{};
    string s{};

    while(getline(cin, s, ':')) {
        split.push_back(s);
    }

    split[3] = split[2].substr(2,2);
    split[2] = split[2].substr(0,2);

    if (split[3] == "PM" && stoi(split[0]) + 12 < 24) {
        split[0] = to_string(stoi(split[0]) + 12);
    } else if (split[3] != "PM" && stoi(split[0]) + 12 >= 24) {
        split[0] = "00";
    }
    cout << split[0] << ":" << split[1] << ":" << split[2].erase(2,2);
    return 0;
}