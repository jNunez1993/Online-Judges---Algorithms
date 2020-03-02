#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    long long dp[n];
    memset(dp, 0, sizeof(long long) * n);

    for (int i = 1; i < n; i++) {
        long long cost1 = dp[i-1];
        long long abs1 = abs(a[i] - a[i-1]);
        long long cost2 = 2e9;
        long long abs2 = 2e9;
        if (i-2 >= 0) {
            cost2 = dp[i-2];
            abs2 = abs(a[i] - a[i-2]);
        }
        dp[i] = min(cost1 + abs1, cost2 + abs2);
    }

    cout<<dp[n-1]<<endl;
}
