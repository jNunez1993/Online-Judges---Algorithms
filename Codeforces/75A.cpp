#include <iostream>
#include <sstream>
using namespace std;


string remove_zero(string s) {
    string str;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0') str+=s[i];
    }
    return str;
}

int main() {
    int a,b;
    cin>>a>>b;
    int sum = a+b;

    stringstream ss_a;
    stringstream ss_b;
    stringstream ss_sum;
    
    ss_a<<a;
    ss_b<<b;
    ss_sum<<sum;

    string sa = remove_zero(ss_a.str());
    string sb = remove_zero(ss_b.str());
    string ssum = remove_zero(ss_sum.str());
    
    int ia = stoi(sa);
    int ib = stoi(sb);
    int isum = stoi(ssum);

    if ((ia+ib) == isum) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
