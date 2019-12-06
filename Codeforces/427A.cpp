#include <iostream>
using namespace std;

int main() {
    int n, e;
    cin>>n;
    int police = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin>>e;
        if (e == -1) {
            if (police < 1) ans++;
            else police--;
        } else police += e;

    }

    cout<<ans<<endl;
}

