#include <bits/stdc++.h>
using namespace std;

// activity: rest(0), gym(1), contest(2)
int cache[105][3];

int ans(int* a, int n, int i, int activity) {
    if (i >= n) return 0;

    if (cache[i][activity] != -1) return cache[i][activity];

    int minRest = 1e9;
    if (a[i] == 0) {
        minRest = min(minRest, 1 + ans(a, n, i+1, 0));
    }

    if (a[i] == 1) {
        if (activity == 0 || activity == 1) {
            minRest = min(minRest, ans(a, n, i+1, 2));
        } else {
            minRest = min(minRest, 1 + ans(a, n, i+1, 0));
        }
    }

    if (a[i] == 2) {
        if (activity == 0 || activity == 2)
            minRest = min(minRest, ans(a, n, i+1, 1));
        else
            minRest = min(minRest, 1 + ans(a, n, i+1, 0));
    }

    if (a[i] == 3) {
        if (activity == 1)
            minRest = min(minRest, ans(a, n, i+1, 2));
        else if (activity == 2)
            minRest = min(minRest, ans(a, n, i+1, 1));
        else {
            minRest = min(minRest, ans(a, n, i+1, 1));
            minRest = min(minRest, ans(a, n, i+1, 2));
        }
    }
    cache[i][activity] = minRest;
    return minRest;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            cache[i][j] = -1;
        }
    }

    cout<<ans(a, n, 0, a[0])<<endl;
}
