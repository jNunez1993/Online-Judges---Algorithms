#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, l;
    cin>>n>>l;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    sort(a, a+n);
    int max_beg = max(a[0], l - a[n-1]);
    int max_d = 0;
    for (int i = 1; i < n; i++) {
        max_d = max(max_d, a[i] - a[i-1]);
    }

    double ans = max((double)max_d/2, (double)max_beg);

    cout<<fixed<<setprecision(10)<<ans<<endl;

}

