#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int ans = a[0];
    int energy = 0;
    for (int i = 0; i < n - 1; i++) {
        int t = a[i] - a[i+1];
        if (t < 0 && energy < -t) {
            ans -= energy + t;
            energy = 0;
        } else {
            energy += t;
        }
    }
    cout<<ans<<endl;
}