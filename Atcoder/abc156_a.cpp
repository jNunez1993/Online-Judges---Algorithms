#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin>>n>>r;
    int inner = r;
    if (n < 10)
        inner = r + 1000 - 100*n;
    cout<<inner<<endl;
}
