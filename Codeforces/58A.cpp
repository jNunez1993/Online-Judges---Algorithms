#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    string target = "hello";
    int idx = 0;
    string ans = "NO";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == target[idx]) idx++;

        if (idx == target.length()) {
            ans = "YES";
            break;
        }
    }


    cout<<ans<<endl;
}
