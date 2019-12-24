#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    char first = '.';
    char last = '.';
    int l = 0;
    int r = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '.' && first == '.') {
            first = s[i];
            l = i;
        }

        if (s[i] != '.') {
            last = s[i];
            r = i;
        }
    }

    if (first == last && first == 'R') {
        cout<<l+1<<" "<<r+2<<endl;
    } else if (first == last && first == 'L') {
        cout<<r+1<<" "<<l<<endl;
    } else {
        for (int i = l+1; i < s.length() - 1; i++) {
            if (s[i] == 'R' && s[i+1] == 'L') {
                r = i;
                break;
            }
        }
        cout<<l+1<<" "<<r+1<<endl;
    }

}
