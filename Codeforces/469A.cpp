#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int p, q, z;
    cin>>p;
    map<int, int> m;
    for (int i = 0; i < p; i++) {
        cin>>z;
        m[z] = 1;
    }
    cin>>q;
    for (int i = 0; i < q; i++) {
        cin>>z;
        m[z] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (m[i] != 1) {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }

    cout<<"I become the guy."<<endl;
}

