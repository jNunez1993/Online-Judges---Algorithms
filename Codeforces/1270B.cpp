#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }

        bool found = false;
        for (int i = 0; i < n-1; i++) {
            if (abs(a[i] - a[i+1]) >= 2) {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout<<"NO"<<endl;
        }

    }
} 
