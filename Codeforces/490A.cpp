#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int t[3] = {0, 0, 0};
    vector<int> v[3];
    int a;
    for (int i = 0; i < n; i++) {
        cin>>a;
        t[a-1]++;
        v[a-1].push_back(i+1);
    }
    sort(t, t+3);
    int minn = t[0];

    cout<<minn<<endl;
    for (int i = 0; i < minn; i++) {
        cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<endl;
    }
}

