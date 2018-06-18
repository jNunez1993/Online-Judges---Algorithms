#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    string* l = new string[n];

    for (int i = 0; i < n; i++) {
        cin>>l[i];
    }
    sort(l, l+n);
    int t1 = 1;
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (l[i] != l[i-1]) {
            idx = i;
            break;
        }
        t1++;
    }

    if (t1 > n-t1) cout<<l[0]<<endl;
    else cout<<l[idx]<<endl;

}
