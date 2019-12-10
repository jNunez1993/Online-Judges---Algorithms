#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin>>n>>m>>a;

    long long v = ceil((double)n/a);
    m -= a;

    long long h = 0;
    if (m > 0) {
        h = ceil((double)m/a);
    }

    cout<<v + v*h<<endl;

}

