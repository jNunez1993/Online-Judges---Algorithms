#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map<string, int> m;
    string s;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin>>s;
        m[s]++;
        mx = max(mx, m[s]);
    }

    vector<string> most;
    for (pair<string, int> e : m) {
        if (e.second == mx) most.push_back(e.first);
    }

    sort(most.begin(), most.end());

    for (int i = 0; i < most.size(); i++) {
        cout<<most[i]<<endl;
    }

}

