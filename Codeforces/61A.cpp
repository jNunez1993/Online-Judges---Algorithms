#include <iostream>
#include <string>
using namespace std;


int main() {
    string s,t;
    cin>>s>>t;
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if ( ((int)s[i] - (int)t[i]) == 0 ) {
            res+="0";
        } else {
            res+="1";
        }
    }
    cout<<res<<endl;
}
