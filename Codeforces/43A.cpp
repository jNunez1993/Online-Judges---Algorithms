#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s[n];
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        cin>>s[i];
        m[s[i]]++;
    }

    sort(s, s+n);
    string one = s[0];
    string two = s[n-1];

    if (m[one] > m[two]) cout<<one<<endl;
    else cout<<two<<endl;
}
