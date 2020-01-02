#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) cin>>a[i];
    sort(a, a+n);

    for (int i = 0; i < n-2; i++) {
        if (a[i] + a[i+1] > a[i+2]) {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
}
