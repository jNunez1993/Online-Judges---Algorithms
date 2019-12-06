#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int next = n;
    for (int i = 0; i < n; i++) {
        m[a[i]] = 1;
        if (a[i] == next) {
            next--;
            cout<<a[i]<<" ";
            for (int j = next; j > 0; j--) {
                if(m[j] == 1) {
                    cout<<j<<" ";
                    next--;
                } else break;
            }
            cout<<endl;
        } else cout<<endl;
    }

}
