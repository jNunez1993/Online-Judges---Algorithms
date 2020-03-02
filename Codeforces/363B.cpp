#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    int a[n];
    int pre[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if (i == 0) pre[i] = a[i];
        else pre[i] = pre[i-1] + a[i];
    }

    int mn = 2e9;
    int ans = 0;
    for (int i = 0; i < n-k+1; i++) {
        int left = 0;
        if (i != 0) {
            left = pre[i-1];
        }

        int val = pre[i+k-1] - left;
        if (val < mn ) {
            ans = i + 1;
            mn = val;
        }
    }

    cout<<ans<<endl;

}
