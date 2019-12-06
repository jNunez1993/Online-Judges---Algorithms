#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        sum += a[i];
    }

    sort(a, a+n);
    int value = 0;
    int i = n-1;
    while (value <= sum) {
        value += a[i];
        sum -= a[i];
        i--;
    }

    cout<<n-1-i<<endl;
}
