#include <iostream>
#include <math.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int l = s.length();
    int n = 0;
    bool two = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            n++;
        }
        if (n>1) {
            two = false;
            break;
        }
    }



    int ans = two ? ceil((double)(l-1)/2) : ceil((double)l/2);
    cout<<(int) ans<<endl;

}
