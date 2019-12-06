#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int cals[5];
    string s;
    for (int i = 1; i < 5; i++) {
        cin>>cals[i];
    }
    cin>>s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        int x = s[i] - '0';
        ans += cals[x];
    }
    cout<<ans<<endl;
}
