#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char mat[n][n];
    set<char> s;
    map<char, int> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>mat[i][j];
            m[mat[i][j]]++;
        }
    }

    char nondiag = mat[1][0];
    int expectedCount = n*n - (2*n-1);
    if (m[nondiag] != expectedCount) {
        cout<<"NO"<<endl;
        return 0;
    }

    int i = 1;
    while (i < n) {
        if (mat[i][i] != mat[i-1][i-1]) {
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
    }

    i = 1;
    int j = n-2;
    while (i < n) {
        if (mat[i][j] != mat[i-1][j+1]) {
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
        j--;
    }

    cout<<"YES"<<endl;
}
