#include <bits/stdc++.h>
using namespace std;


long long cache[100005];

long long jump(int *a, int n, int i) {
    if (i >= n) {
        return 2e9;
    }

    if (i == n-1) {
        return 0;
    }

    if (cache[i] != -1) {
        return cache[i];
    }

    long long cost1 = jump(a, n, i+1);
    long long abs1 = abs(a[i] - a[i+1]);

    long long cost2 = jump(a, n, i+2);
    long long abs2 = abs(a[i] - a[i+2]);

    long long minCost = min(cost1 + abs1, cost2 + abs2);
    cache[i] = minCost;
    return minCost;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    for (int i = 0; i <= n; i++) cache[i] = -1;
    cout<<jump(a, n, 0)<<endl;
}
