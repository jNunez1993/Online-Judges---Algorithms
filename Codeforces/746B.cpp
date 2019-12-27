#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    ans += s[0];

    int pos = s.length() % 2 == 0 ? 1 : 0;

    for (int i = 1; i < s.length(); i++) {
        if (pos == 1) ans += s[i];
        else ans = s[i] + ans;
        pos = 1 - pos;
    }

    cout<<ans<<endl;
}
