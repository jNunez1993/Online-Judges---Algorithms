#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    s = 'Z' + s + 'Z';
    int ans = 0;
    for (int i = 1; i < n + 2; i++) {
        if (s[i] == s[i-1]) ans++;
    }

    cout<<ans<<endl;
}
