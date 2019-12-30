#include <iostream>
#include <algorithm>
#include <functional>
#include <utility>
#include <set>
using namespace std;

int main() {
    int n, f;
    cin>>n>>f;
    int k[n];
    int l[n];

    for (int i = 0; i < n; i++) {
        cin>>k[i];
        cin>>l[i];
    }

    pair<int, int> gain[n];

    for (int i = 0; i < n; i++) {
        int val = min(2*k[i], l[i]);
        gain[i] = make_pair(val - k[i], i);
    }

    sort(gain, gain+n);
    set<int> indices;
    for (int i = n-1; i >= n-f; i--) {
        indices.insert(gain[i].second);
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        if (indices.count(i) == 1) {
            ans += min(2*k[i], l[i]);
        } else {
            ans += min(k[i], l[i]);
        }
    }

    cout<<ans<<endl;

}
