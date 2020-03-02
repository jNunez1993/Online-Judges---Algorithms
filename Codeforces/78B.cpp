#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string seq = "ROYGBIV";
    string other = "GBIROYV";
    int idx = 0;
    string ans = "";
    int left = 0;
    while (n - 7 >= 0) {
        left = n%7;
        n -= 7;
        ans += seq;
    }

    if (left >= 4) {
        ans += seq.substr(0, left);
    } else {
        ans += other.substr(0, left);
    }

    cout<<ans<<endl;

}
