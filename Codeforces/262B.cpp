#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int i = 0;

    while (i < n && a[i] < 0 && k != 0) {
        a[i] = -1 * a[i];
        i++;
        k--;
    }

    if (k > 0) {
        int m = 1e9;
        int minIndex = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] < m) {
                m = a[i];
                minIndex = i;
            }
        }
        if (k % 2 == 1) a[minIndex] = -1 * a[minIndex];
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
    }

    cout<<s<<endl;
}
