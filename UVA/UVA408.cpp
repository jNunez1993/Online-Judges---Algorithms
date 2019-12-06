#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    while (cin>>n1>>n2) {
        int divisor = __gcd(n1, n2);
        string ans;
        if (divisor == 1) ans = "Good Choice";
        else ans = "Bad Choice";

        string s1 = to_string(n1);
        string s2 = to_string(n2);

        s1 = string(10 - s1.length(), ' ').append(s1);
        s2 = string(10 - s2.length(), ' ').append(s2);
        ans = string(4, ' ').append(ans);
        cout<<s1<<s2<<ans<<endl;
        cout<<endl;
    }
}
