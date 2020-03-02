#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)  cin>>a[i];

    int prev = -1;
    long long result = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (prev == -1) result = 1;
            else {
                result *= (i-prev);
            }
            prev = i;
        }
    }

    cout<<result<<endl;
}

