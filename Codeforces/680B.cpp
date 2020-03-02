#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int left = x-1;
    int right = x-1;
    int ans = 0;
    while (left >= 0 || right < n) {
        if (left >= 0 && right < n && a[left] > 0 && a[right] > 0) {
            if (left == right) ans += a[left];
            else ans += a[left] + a[right];
            left--;
            right++;
        } else if (left < 0 && right < n && a[right] > 0) {
            ans += a[right];
            right++;
        } else if (left >= 0 && right >= n && a[left] > 0)  {
            ans += a[left];
            left--;
        } else {
            left--;
            right++;
        }
    }

    cout<<ans<<endl;
}
