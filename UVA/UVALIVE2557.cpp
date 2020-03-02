#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        int state[n+1];
        memset(state, 0, sizeof(state));

        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j+=i) {
                state[j] = 1 - state[j];
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += state[i];
        }

        cout<<ans<<endl;
    }
}
