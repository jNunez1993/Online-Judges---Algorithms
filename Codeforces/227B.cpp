#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    int n, m, k, q;
    cin>>n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin>>k;
        a[i] = {k, i};
    }
    cin>>m;

    sort(a, a+n);
    long long vas = 0;
    long long pet = 0;
    for (int i = 0; i < m; i++) {
        cin>>q;
        int low = 0;
        int high = n-1;
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (a[mid].first == q) {
                ans = a[mid].second;
                break;
            }

            if (q > a[mid].first) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
       vas += ans+1;
       pet += n - ans;
    }

    cout<<vas<<" "<<pet<<endl;
}
