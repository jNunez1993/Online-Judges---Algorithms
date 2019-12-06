#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--) {
        long long ans = 0;
        long long a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a+3);
        ans += a[0];
        a[2] -= a[0];

        if (a[2] < a[1]) {
            long long avg = (a[1] + a[2]) / 2;
            if ((a[2] + a[1]) % 2 == 0) {
                a[1] = avg;
                a[2] = avg;
            } else {
                a[1] = avg;
                a[2] = avg+1;
            }
        }

        ans += a[1];
        cout<<ans<<endl;
    }
}
