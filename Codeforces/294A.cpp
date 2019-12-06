#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n+2];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int m;
    cin>>m;
    int left, wire;
    for (int i = 0; i < m; i++) {
        cin>>wire>>left;
        if (wire-2 >= 0) a[wire-2] += left-1; 
        if (wire < n) a[wire] += (a[wire-1] - left);
        a[wire-1] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout<<a[i]<<endl;
    }
}
