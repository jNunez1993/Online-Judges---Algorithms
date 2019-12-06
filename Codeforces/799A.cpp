#include <iostream>
using namespace std;

int main() {
    int n, t, k, d;
    cin>>n>>t>>k>>d;
    int t0 = 0;
    while (t0 <= d) {
        n -= k;
        t0 += t;
    }

    if (n > 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
