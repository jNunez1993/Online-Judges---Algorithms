#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    bool isOne = false;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if (a[i] == 1) isOne = true;
    }
    if (!isOne) {
        cout<<0<<endl;
        return 0;
    }
    int i = 0;
    int j = 0;
    long long ans = 1;
    while (i < n) {
        if (a[i] == 1) {
            j = i+1;
            while (j < n && a[j] != 1) {
                j++;
            }
            if (j == n and a[j-1] != 1) break;
            int num_zeroes = j - i - 1;
            ans *= (num_zeroes + 1);
            i = j;
        } else {
            i++;
        }
    }

    cout<<ans<<endl;
}
