#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    map<int, int> m;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        m[a[i]]++;
        mx = max(mx, m[a[i]]);
    }

    if (mx > (n+1)/2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
