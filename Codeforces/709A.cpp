#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b, d;
    cin>>n>>b>>d;
    int j;
    int total = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin>>j;
        if (j > b) continue;
        total += j;
        if (total > d) {
            ans++;
            total = 0;
        }
    }
    cout<<ans<<endl;
}

