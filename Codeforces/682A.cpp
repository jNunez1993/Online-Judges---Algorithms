#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int cnt = 0;
    long long ans = 0;
    int mod[5] = {0};
    for (int i = 1; i <= m; i++) {
        mod[i%5] += 1;
    }

    for (int i = 1; i <= n; i++) {
        ans += mod[(5 - i%5)%5];
    }

    cout<<ans<<endl;

}
