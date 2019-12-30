#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n+2];
    a[0] = 0;
    a[n+1] = 2e9;
    for (int i = 1; i <= n; i++) {
        cin>>a[i];
    }

    int seg_l = 0;
    int seg_r = 0;
    bool found = false;
    int i = 1;
    while (i <= n) {
        if (a[i] > a[i+1]) {
            if (found) {
                cout<<"no"<<endl;
                return 0;
            }

            seg_l = i;
            found = true;
            while (i <= n && a[i] > a[i+1]) {
                i++;
                seg_r = i;
            }
        } else i++;
    }

    string ans = "no";
    if (!found) {
        seg_l = 1;
        seg_r = 1;
        ans = "yes";
    } else if (seg_l == 1 && seg_r == n) {
        ans = "yes";
    }
    else if (a[seg_l-1] < a[seg_r] && a[seg_l] < a[seg_r +1]) {
        ans = "yes";
    }
    else ans = "no";

    cout<<ans<<endl;
    if (ans != "no") cout<<seg_l<<" "<<seg_r<<endl;
}
