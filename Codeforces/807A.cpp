#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int before[n];
    int after[n];
    bool rated = false;
    for (int i = 0; i < n; i++) {
        cin>>before[i];
        cin>>after[i];
        if (before[i] != after[i]) {
            rated = true;
        }
    }
    if (rated) {
        cout<<"rated"<<endl;
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (before[i] > before[i-1]) {
            cout<<"unrated"<<endl;
            return 0;
        }
    }

    cout<<"maybe"<<endl;

}

