#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s1, s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    string a[2] = {s1, s2};
    sort(a, a+2);
    if (s1 == s2) {
        cout<<0<<endl;
    } else if (s1 == a[0]) {
        cout<<-1<<endl;
    } else {
        cout<<1<<endl;
    }
}

