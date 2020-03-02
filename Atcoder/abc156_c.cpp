#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x[n];

    int maxPos = 0;
    for (int i = 0; i < n; i++) {
        cin>>x[i];
        maxPos = max(maxPos, x[i]);
    }

    int minStamina = 1e9;
    for (int i = 0; i <= maxPos; i++) {
        int stamina = 0;
        for (int j = 0; j < n; j++) {
            stamina += (x[j] - i) * (x[j] - i);
        }
        minStamina = min(minStamina, stamina);
    }

    cout<<minStamina<<endl;
}

