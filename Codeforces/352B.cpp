#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int, vector<int>> m;
    int x;
    for (int i = 0; i < n; i++) {
        cin>>x;
        m[x].push_back(i+1);
    }

    vector<pair<int, int>> ans;

    for (pair<int, vector<int>> e : m) {
        int prog = 0;
        bool isProgression = true;
        if (e.second.size() >= 2) {
            prog = e.second[1] - e.second[0];
        }

        for (int i = 2; i < e.second.size(); i++) {
            if (e.second[i] - e.second[i-1] != prog) {
                isProgression = false;
                break;
            }
        }

        if (!isProgression) continue;
        ans.push_back({e.first, prog});
    }

    cout<<ans.size()<<endl;

    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

}
