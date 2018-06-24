#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <string.h>
using namespace std;
string dictionary[1005];
string rules[1005];
int n,m;

void solve(string word, int rule_idx, int rule_char_idx) {
    if (rule_char_idx == rules[rule_idx].length()) {
        if (word != "") {
            cout<<word<<endl;
        }
        return;
    }
    if (rule_idx == m) return;
    if (rules[rule_idx][rule_char_idx] == '#') {
        for (int i = 0; i < n; i++) {
            solve(word+dictionary[i], rule_idx, rule_char_idx+1);
        }
    }
    if (rules[rule_idx][rule_char_idx] == '0') {
        for (int i = 0; i <= 9; i++) {
            solve(word+to_string(i), rule_idx, rule_char_idx+1);
        }
    }
    solve("", rule_idx+1, 0);
}

int main() {
    while (cin>>n) {
        for (int i = 0; i < n; i++) {
            cin>>dictionary[i];
        }
        cin>>m;

        for (int i = 0; i < m; i++) {
            cin>>rules[i];
        }
        cout<<"--"<<endl;
        solve("", 0,0);
    }
}
