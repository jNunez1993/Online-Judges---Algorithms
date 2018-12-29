#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, v;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    sort(a, a+n);
    for (int i = 0; i < m; i++) {
        cin>>v;
        int* it = upper_bound(a, a+n, v);
        cout<<it - a<<" ";
    }
}
