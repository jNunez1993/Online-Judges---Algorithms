#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    sort(a, a+n);
    if (n == 1) {
        cout<<"YES"<<endl;
        return 0;
    } 

    int mid = (a[0] + a[n-1])/2;
    int diff = a[n-1] - mid;
    if ((a[0] + a[n-1]) % 2 == 1) {
        mid = a[0];
        diff = a[n-1] - a[0];
    }

    string ans = "YES";
    for (int i = 0; i < n; i++) {
        if (a[i] != mid && a[i] + diff != mid && a[i] - diff != mid) {
            ans = "NO";
            break;
        }
    }
    cout<<ans<<endl;
}
