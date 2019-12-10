#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin>>n>>k;
    long long mid;
    if (n % 2 == 1) mid = n/2+1;
    else mid = n/2;
    if (k <= mid) cout<<k*2-1<<endl;
    else cout<<(k-mid)*2<<endl;
}
