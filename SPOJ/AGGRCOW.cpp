#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n, c;
    cin>>t;
    while (t--) {
        cin>>n>>c;
        int x[n];
        for (int i = 0; i < n; i++) {
            cin>>x[i];
        }
        sort(x, x+n);
        int low = 0;
        int high = 1000000000;
        int ans = 0;
        while (low <= high) {
            int toPlace = c - 1;
            int idx = 0;
            int mid = low + (high - low)/2;
            for (int i = 1; i < n && toPlace > 0; i++) {
                if (x[i] - x[idx] >= mid) {
                    idx = i;
                    toPlace--;
                }
            }

            if (toPlace == 0) {
                ans = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
        }

        cout<<ans<<endl;
    }
}
