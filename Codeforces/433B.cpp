#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    long long pre1[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if (i == 0) pre1[i] = a[i];
        else pre1[i] = pre1[i-1] + a[i];
    }

    sort(a, a+n);
    long long pre2[n];

    for (int i = 0; i < n; i++) {
        if (i == 0) pre2[i] = a[i];
        else pre2[i] = pre2[i-1] + a[i];
    }

    int m, type, l, r;
    cin>>m;

    for (int i = 0; i < m; i++) {
        cin>>type>>l>>r;
        l--; r--;
        if (type == 1) {
            if (l != 0) cout<<pre1[r] - pre1[l-1]<<endl;
            else cout<<pre1[r]<<endl;
        } else {
            if (l != 0) cout<<pre2[r] - pre2[l-1]<<endl;
            else cout<<pre2[r]<<endl;
        }
    }

}
