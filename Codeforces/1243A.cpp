#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }

        int maxsquare = 0;
        for (int i = 1; i <= n; i++) {
            int nums = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] >= i) nums++;
            }
            if (nums >= i) {
                maxsquare = i;
            }
        }
        cout<<maxsquare<<endl;
    }
}
