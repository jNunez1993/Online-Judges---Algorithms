#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        long long a[n];
        long long x;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            sum += a[i];
            if (i == 0) x = a[i];
            else x ^= a[i];
        }
        cout<<2<<endl;
        cout<<x<<" "<<sum+x<<endl;
    }
}

