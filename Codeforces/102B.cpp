#include <iostream>
using namespace std;

int main() {
    string n;
    cin>>n;
    long long sum = 0;
    int ans = 0;
    if (n.length() == 1) {
        cout<<0<<endl;
        return 0;
    }
    while (true) {
        for (int i = 0; i < n.length(); i++) {
            int s = n[i] - '0';
            sum += s;
        }
        ans++;
        if (sum > 0 && sum < 10) break;
        n = to_string(sum);
        sum = 0;
    }
    cout<<ans<<endl;
}
