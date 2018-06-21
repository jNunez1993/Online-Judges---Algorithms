#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = i; k < j; k++) {
                if (s[i] == 'Q' && s[j] == 'Q' && s[k] == 'A') cnt++;
            }
        }
    }

    cout<<cnt<<endl;

}
