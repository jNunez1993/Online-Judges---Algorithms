#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    pair<int, int> p[m];
    int a, b;
    for (int i = 0; i < m; i++) {
        cin>>a>>b;
        pair<int, int> pa = {b, a};
        p[i] = pa;
    }

    sort(p, p+m);
    int ans = 0;
    int taken = 0;

    for (int i = m-1; i >=0; i--) {
        int boxes = p[i].second;
        int matches = p[i].first;
        int matchesTaken = 0;
        int boxesTaken = 0;
        if (taken + boxes <= n) {
            matchesTaken = boxes * matches;
            boxesTaken = boxes;
        } else {
            matchesTaken = (n - taken) * matches;
            boxesTaken = n - taken;
        }
        ans += matchesTaken;
        taken += boxesTaken;
    }

    cout<<ans<<endl;
}
