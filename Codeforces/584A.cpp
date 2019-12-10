#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string t;
    cin>>n>>t;
    if (n == 1 && t == "10") {
        cout<<-1<<endl;
        return 0;
    }

    string s = t;
    for (int i = s.length(); i < n; i++) {
        s += "0";
    }
    cout<<s<<endl;
}

