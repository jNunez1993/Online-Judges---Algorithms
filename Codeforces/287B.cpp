#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long n, k;
    cin>>n>>k;

    if (n == 1) {
        cout<<0<<endl;
        return 0;
    }

    if (k >= n) {
        cout<<1<<endl;
        return 0;
    }


    long long low = 2;
    long long high = k;
    long long ans = -1;
    while (low <= high) {
        long long mid = low + (high - low)/2;
        double upto = (k - mid + 1)/(double)2 * (mid + k) - (k - mid);
        if ((long long)upto >= n) {
            ans = k - mid + 1;
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    cout<<ans<<endl;
}
