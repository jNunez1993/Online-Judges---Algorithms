#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;

    return n * factorial(n-1);
}

long long comb(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main() {
    int n, a, b;
    cin>>n>>a>>b;

    long long ans = pow(2, n) - 1 - comb(n, a) - comb(n, a);
    cout<<ans<<endl;
}

