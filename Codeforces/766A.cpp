#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin>>s1>>s2;
    if (s1 == s2) {
        cout<<-1<<endl;
        return 0;
    }

    cout<<max(s1.length(), s2.length())<<endl;
}
