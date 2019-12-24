#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int mn = 2e9;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R' && s[i+1] == 'L') {
            mn = min(mn, (a[i+1] - a[i]) / 2);
        }
    }
    if (mn == 2e9) cout<<-1<<endl;
    else cout<<mn<<endl;
}

