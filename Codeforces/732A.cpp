#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin>>k>>r;
    int ans = 1;
    int sum = k;
    while (sum % 10 != r && sum % 10 != 0) {
        sum += k;
        ans++;
    }
    cout<<ans<<endl;
}
