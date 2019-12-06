#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a;
    int m[n+1];
    for (int i = 1; i <= n; i++) {
        cin>>a;
        m[a] = i;
    }

    for (int i = 1; i <=n; i++) {
        cout<<m[i]<<" ";
    }
}
