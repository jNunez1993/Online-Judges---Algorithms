#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    sort(a, a+n);
    int mn = a[0];
    int mx = a[n-1];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > mn && a[i] < mx) ans++;
    }
    cout<<ans<<endl;
}
