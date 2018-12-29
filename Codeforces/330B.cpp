#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, m, c1, c2;
    cin>>n>>m;
    map<int, bool> mp;
    for (int i = 0; i < m; i++) {
        cin>>c1>>c2;
        mp[c1] = true;
        mp[c2] = true;
    }

    int middle_city = -1;
    for (int i = 1; i <= n; i++) {
        if (!mp[i]) {
            middle_city = i;
            break;
        }
    }
    cout<< n - 1 << endl;
    for (int i = 1; i <= n; i++) {
        if (i != middle_city) {
            cout<<middle_city<<" "<<i<<endl;
        }
    }
}
