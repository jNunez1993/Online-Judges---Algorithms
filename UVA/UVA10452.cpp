#include <bits/stdc++.h>
using namespace std;

string target = "IEHOVA#";
vector<string> steps;
int dx[3] = {-1, 0, 0};
int dy[3] = {0, 1, -1};
int npos = 3;
int n, m;
string s[8];
map<int, string> sdirs = {
    {0, "forth"},
    {1, "right"},
    {2, "left"}
};


void traverse(int x, int y, int c) {
    if (c == target.length()) return;

    for (int i = 0; i < npos; i++) {
        int xnext = x + dx[i];
        int ynext = y + dy[i];
        if (xnext >= 0 && xnext < n && ynext >= 0 && ynext < m && s[xnext][ynext] == target[c]) {
            steps.push_back(sdirs[i]);
            traverse(xnext, ynext, c+1);
            return;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        steps.clear();
        cin>>n>>m;
        for (int i = 0; i < n; i++) {
            cin>>s[i];
        }
        int xstart = n-1;
        int ystart;
        for (int i = 0; i < m; i++) {
            if (s[n-1][i] == '@') {
                ystart = i;
                break;
            }
        }

        traverse(xstart, ystart, 0);
        for (int i = 0; i < steps.size(); i++) {
            if (i < steps.size() -1)
                cout<<steps[i]<<" ";
            else cout<<steps[i]<<endl;
        }
    }
}

