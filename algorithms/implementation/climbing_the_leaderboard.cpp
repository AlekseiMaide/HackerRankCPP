//
// Climbing the leaderboard.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int n{};
    int temp{};
    stack<unsigned int> stack;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (stack.empty() || stack.top() != temp) {
            stack.push(temp);
        }
    }

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        while (!stack.empty() && stack.top() <= temp) {
            stack.pop();
        }
        cout << stack.size() + 1 << "\n";
    }

    return 0;
}