//
// Closest Numbers.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Pair {
public:
    int getX(void);
    int getY(void);
    Pair(int a, int b);
private:
    int x;
    int y;
};

Pair::Pair(int a, int b) {
    x = a;
    y = b;
}

int Pair::getX(void) {
    return x;
}

int Pair::getY(void) {
    return y;
}

int main() {
    int n{};
    int temp{};
    int min{numeric_limits<int>::max()};
    int prev{numeric_limits<int>::max()};

    vector<int> v{};
    vector<Pair> pairs{};

    cin >> n;

    while (cin >> temp) {
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < v.size(); i++) {
        if (abs(v[i] - v[i - 1]) < min) {
            min = abs(v[i] - v[i - 1]);
            pairs.clear();
            pairs.push_back(Pair(v[i - 1], v[i]));
        } else if (abs(v[i] - v[i - 1]) == min) {
            pairs.push_back(Pair(v[i - 1], v[i]));
        }
    }

    for (auto pair : pairs) {
        cout << pair.getX() << " " << pair.getY() << " ";
    }


    return 0;
}
