#include <bits/stdc++.h>
using namespace std;


long long cache[100005];

long long jump(int *a, int n, int k, int i) {
    if (i >= n) {
        return 2e9;
    }

    if (i == n-1) {
        return 0;
    }

    if (cache[i] != -1) {
        return cache[i];
    }

    long long minCost = 2e9;
    for (int m = 1; m <= k && i + m < n; m++) {
        minCost = min(minCost, jump(a, n, k, i+m) + abs(a[i] - a[i+m]));
    }

    cache[i] = minCost;
    return minCost;
}

int main() {
    int n, k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    for (int i = 0; i <= n; i++) cache[i] = -1;
    cout<<jump(a, n, k, 0)<<endl;
}

