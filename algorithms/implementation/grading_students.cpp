//
// Grading students.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,temp;
    cin>>temp;
    while(cin>>n)
    {
        if(n<38)
            cout<<n<<endl;
        else if(n%5 >= 3)
            cout<<n+ (5-n%5)<<endl;
        else
            cout<<n<<endl;

    }
    return 0;
}