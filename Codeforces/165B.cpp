#include <iostream>
#include <math.h>
using namespace std;

int can(int v, int k, int n) {
    int sum = 0;
    int exp = 0;
    while (true) {
        int p = v/(int)pow(k, exp++);
        if (p == 0) break;
        sum += p;
    }
    return sum >= n;
}

int main() {
    int n, k;
    cin>>n>>k;

    int low = 1;
    int high = n;

    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low)/2;
        if (can(mid, k, n)) {
            ans = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }

    cout<<ans<<endl;
}
