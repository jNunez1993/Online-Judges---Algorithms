#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int l = 0;
    int r = n-1;
    int s = 0;
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (i%2 == 0) {
            if (a[l] > a[r]) {
                s += a[l];
                l++;
            } else {
                s += a[r];
                r--;
            }
        } else {
            if (a[l] > a[r]) {
                d += a[l];
                l++;
            } else {
                d += a[r];
                r--;
            }
        }
    }

    cout<<s<<" "<<d;
}

