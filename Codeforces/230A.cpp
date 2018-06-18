#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int s,n;
    cin>>s>>n;
    string res = "YES";

    vector< pair<int,int> > v;
    int x,y;
    for (int i = 0; i < n; i++) {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        if (s > v[i].first) {
            s += v[i].second;
        } else {
            res = "NO";
            break;
        }
    }
    cout<<res<<endl;

}
