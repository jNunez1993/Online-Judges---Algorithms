#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n,a,b;
    cin>>n;
    vector<pair<int,int> > v;
    for (int i = 0; i < n; i++) {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(), v.end());
    bool happy = 0;
    for(int i = 1 ; i < v.size(); i++) {
        if (v[i-1].second > v[i].second) {
            happy = 1;
            break;
        }
    }

    if (happy) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
}
