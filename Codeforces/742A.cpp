#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[4] = {8, 4, 2, 6};
    if (n == 0) cout<<1<<endl;
    else {
        cout<<a[(n-1)%4]<<endl;
    }

}

