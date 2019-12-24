#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    char k;
    cin>>n>>k;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        map<char, int> digits;
        for (int j = 0; j < a[i].length(); j++) {
            digits[a[i][j]] = 1;
        }

        for (int j = 0; j <= k; j++) {
            char idx = j + '0';
            if (digits[idx] != 1) {
                break;
            }
            if (idx == k) {
                ans++;
            }
        }
    }

    cout<<ans<<endl;
}
