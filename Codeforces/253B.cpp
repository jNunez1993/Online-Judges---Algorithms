#include <bits/stdc++.h>
using namespace std;

int a[100005];
map<pair<int, int>, int> m;

int solve (int low, int high) {
    if (low >= high) return 1e9;

    int mid = low + (high - low)/2;
    if (a[low] * 2 >= a[high]) {
        return 0;
    }

    if (m[{low, high}] != 0) return m[{low, high}];

    int take_low = 1 + solve(low+1, high);
    int take_high = 1 + solve(low, high-1);

    int ans = min(take_low, take_high);
    m[{low, high}] = ans;
    return ans;
}

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    sort(a, a+n);

    int ans = solve(0, n-1);
    cout<<ans<<endl;
}
