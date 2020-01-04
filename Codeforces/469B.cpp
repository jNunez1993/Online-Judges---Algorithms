#include <iostream>
#include <utility>
#include <map>
using namespace std;

int main() {
    int p, q, l, r;
    cin>>p>>q>>l>>r;
    pair<int,int> x[q];
    map<int, bool> m;
    int p1, p2;
    for (int i = 0; i < p; i++) {
        cin>>p1>>p2;
        for (int j = p1; j <= p2; j++) m[j] = true;
    }
    for (int i = 0; i < q; i++) {
        cin>>p1>>p2;
        x[i] = make_pair(p1, p2);
    }

    int ans = 0;
    for (int i = l; i <= r; i++) {
        bool done = false;
        for (int j = 0; j < q && !done; j++) {
            for (int k = x[j].first + i; k <= x[j].second + i; k++) {
                if (m[k]) {
                    ans++;
                    done = true;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}
