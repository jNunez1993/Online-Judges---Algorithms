#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<pair<int, int>> indices;
    int start = -1;
    while (s.find("WUB") != -1) {
        int pos = s.find("WUB");
        s.replace(pos, 3, " ");
    }

    s.erase(0, s.find_first_not_of(' '));
    s.erase(s.find_last_not_of(' ') + 1);

    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && s[i-1] != ' ') ans += ' ';

        if (s[i] != ' ') {
            ans +=  s[i];
        }
    }

    cout<<ans<<endl;
}

