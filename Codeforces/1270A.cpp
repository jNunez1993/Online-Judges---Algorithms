#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n, k1, k2;
    while (t--) {
        cin>>n>>k1>>k2;
        int p1;
        int p2;
        string ans;
        for (int i = 0; i < k1; i++) {
            cin>>p1;
            if (p1 == n) ans = "YES";
        }

        for (int i = 0; i < k2; i++) {
            cin>>p2;
            if (p2 == n) ans = "NO";
        }
        cout<<ans<<endl;
    }
}
