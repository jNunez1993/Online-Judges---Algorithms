#include <iostream>
using namespace std;

int main() {
    string s, rest;
    cin>>s>>rest;
    string left = "";
    string right = "";
    int idx = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') break;
        idx++;
    }

    left = s.substr(0, idx);
    right = s.substr(idx+1, s.length());

    for (int i = 0; i < rest.length(); i++) {
        if (left.length() > right.length()) {
            right += rest[i];
        } else {
            left += rest[i];
        }
    }
    if (left.length() != right.length()) {
        cout<<"Impossible"<<endl;
    } else {
        cout<<left<<"|"<<right<<endl;
    }
}
