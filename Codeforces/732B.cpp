#include <iostream>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int walks = 0;
    for (int i = 1; i < n; i++) {
        if (a[i-1] + a[i] < k) {
            walks += (k-a[i-1]-a[i]);
            a[i] = k-a[i-1];
        }
    }

    cout<<walks<<endl;
    for (int i = 0; i < n; i++) {
        cout<<a[i]<< " ";
    }
    cout<<endl;
}
