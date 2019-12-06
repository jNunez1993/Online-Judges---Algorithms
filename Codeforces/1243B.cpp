#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int k;
    cin>>k;
    int n;
    string s, t;
    while (k--) {
        cin>>n;
        cin>>s>>t;
        vector<int> pos;
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i]) {
                pos.push_back(i);
            }
        }

        if (pos.size() == 0) {
            cout<<"Yes"<<endl;
        } else if (pos.size() > 2 || pos.size() == 1) {
            cout<<"No"<<endl;
        } else {
            if (s[pos[0]] == s[pos[1]] && t[pos[0]] == t[pos[1]]) {
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }
}
