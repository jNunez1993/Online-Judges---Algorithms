#include <bits/stdc++.h>
using namespace std;

int main() {
    int d[3];
    cin>>d[0]>>d[1]>>d[2];

    string ans = "Yes";
    if (d[0] == d[1] && d[1] == d[2] && d[0] == d[2]) {
        ans = "No";
    } else if (d[0] != d[1] && d[0] != d[2] && d[1] != d[2]) {
        ans = "No";
    }

    cout<<ans<<endl;
}
