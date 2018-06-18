#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int res = 0;

    if ( (a+b) == n ) {
        res = b;
    } else {
        res = b+1;
    }
    res = min(n-a, res);
    cout<<res<<endl;
}
