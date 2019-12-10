#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    char c;
    bool color = false;
    for (int i = 0; i < n;  i++) {
        for (int j = 0; j < m; j++) {
            cin>>c;
            if (c != 'W' && c != 'B' && c != 'G') {
                color = true;
            }
        }
    }
    if (color) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}

