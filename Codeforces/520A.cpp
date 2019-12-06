#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string alphabet = "abcdefghijklmnopqrstuwvxyz";
    map<char, int> m;

    for (int i = 0; i < s.length(); i++) {
        m[s[i]] = 1;
    }

    bool pangram = true;
    for (int i = 0; i < alphabet.length(); i++) {
        if (m[alphabet[i]] != 1) {
            pangram = false;
            break;
        }
    }
    if (pangram) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
