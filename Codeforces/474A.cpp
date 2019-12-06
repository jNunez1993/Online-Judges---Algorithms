#include <bits/stdc++.h>
using namespace std;

int main() {
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char, int> m;
    for (int i = 0; i < keyboard.length(); i++) {
        m[keyboard[i]] = i;
    }

    char letter;
    cin>>letter;
    string s;
    cin>>s;
    int dx = letter == 'R'? -1 : 1;
    string message = "";
    for (int i = 0; i < s.length(); i++) {
        message += keyboard[m[s[i]]+dx];
    }

    cout<<message<<endl;
}

