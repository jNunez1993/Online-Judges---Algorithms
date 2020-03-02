#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> cache;
vector<pair<int, int>> v;

int solve(int i, int lastPos) {

    if (i == v.size()) {
        return 0;
    }

    int keep = 0;
    int left = 0;
    int right = 0;

    if (cache[{i,  lastPos}] != 0) return cache[{i, lastPos}];

    keep = solve(i+1, v[i].first);

    if (lastPos < v[i].first - v[i].second) {
        left = 1 + solve(i+1, v[i].first);
    }

    if (i == v.size() -1 || v[i].first + v[i].second < v[i+1].first) {
        right = 1 + solve(i+1, v[i].first + v[i].second);
    }

    int ans = max(keep, max(left, right));
    cache[{i, lastPos}] = ans;
    return ans;
}

int main() {
    int n;
    cin>>n;
    int x, h;
    for (int i = 0; i < n; i++) {
        cin>>x>>h;
        v.push_back({x, h});
    }

    cout<<solve(0, -1000000007)<<endl;
}
