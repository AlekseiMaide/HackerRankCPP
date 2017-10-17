//
// The full counting sort.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Field {
public:
    int getX(void);
    string getS(void);
    Field(int n, string c);
private:
    int x;
    string s;
};

Field::Field(int n, string c) {
    x = n;
    s = c;
}

int Field::getX(void) {
    return x;
}

string Field::getS(void) {
    return s;
}

int main() {
    int n{};
    int x{};
    string s{};

    int a{};
    int b{};

    vector<Field> v{};
    vector<int> counts(100);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> s;
        (i < n/2) ? s = '-' : s;
        v.push_back(Field(x, s));
        counts[x]++;
    }

    for (int i = 0; i < 100; i++) {
        if (counts[i] > 0) {
            a = 0;
            b = 0;
            while (a < counts[i]) {
                if (v[b].getX() == i) {
                    cout << v[b].getS() << " ";
                    a++;
                }
                b++;
            }
        }
    }
    return 0;
}