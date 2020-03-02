#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;
long long cache[105][100005];

long long take(int w, int i, int cw) {
    if (cw > w) {
        return -1e18;
    }
    if (i >= v.size()) {
        return 0;
    }

    if (cache[i][cw] != -1) {
        return cache[i][cw];
    }

    long long value = max(v[i].second + take(w, i+1, cw + v[i].first), take(w, i+1, cw));
    cache[i][cw] = value;
    return value;
}

int main() {
    int n, w;
    cin>>n>>w;
    v.resize(n);

    int wi, vi;
    for (int i = 0; i < n; i++) {
        cin>>wi>>vi;
        v[i] = {wi, vi};
    }


    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            cache[i][j] = -1;
        }
    }

    long long ans = take(w, 0, 0);
    cout<<ans<<endl;
}

