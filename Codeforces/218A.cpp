#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    n = n * 2 + 1;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int i = 1;
    while (k > 0 && i < n - 1) {
        if (i%2 == 1 && a[i] - 1 > a[i-1] && a[i] - 1 > a[i+1]) {
            a[i] -= 1;
            k--;
        }
        i++;
    }
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
}

