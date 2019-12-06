#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int k;
    cin>>k;
    int n;
    string s, t;
    while (k--) {
        cin>>n;
        cin>>s>>t;
        string concat = s+t;
        map<char, int> m;
        for(int i = 0; i < concat.length(); i++) {
            m[concat[i]]++;
        }

        bool no = false;
        for(int i = 0; i < concat.length(); i++) {
            if (m[concat[i]] % 2 == 1) {
                no = true;
                cout<<"No"<<endl;
                break;
            }
        }

        if (no) continue; 

        // abc
        // bca
        // ----
        // aba
        // bcc
        //---- 
        //abc
        //abc
        //
        vector<pair<int,int>> swaps;
        for (int i = 0; i < n; i++) {
            if (s[i] == t[i]) continue;
            for (int j = i+1; j < n; j++) {
                // If there is another char that matches the current char
                // Replace t[i] with that character
                if (s[j] == s[i]) {
                    swap(s[j], t[i]);
                    swaps.push_back({j+1,i+1});
                    break;
                }

                // If s[i] == t[j]: If there is a character in the next string that matches the current char then, swap t[j] and s[j[ so that the character is now in s. Then swap s[j] with t[i] like above to get them to match
                if (s[i] == t[j]) {
                    swap(t[j], s[j]);
                    swap(s[j], t[i]);
                    swaps.push_back({j+1,j+1});
                    swaps.push_back({j+1,i+1});
                    break;
                }
            }
        }
        cout<<"Yes"<<endl;
        cout<<swaps.size()<<endl;
        for(int i = 0; i < swaps.size(); i++) {
            cout<<swaps[i].first<<" "<<swaps[i].second<<endl;
        }
    }
}
