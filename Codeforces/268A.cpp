#include <iostream>
#include <utility>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans = 0;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i].first>>a[i].second;
    }

    for (int i = 0; i < n; i++) {
        int home = a[i].first;
        int guest = a[i].second;
        for (int j = i+1; j < n; j++) {
            if (home == a[j].second) ans++;
            if (guest == a[j].first) ans++;
        }
    }

    cout<<ans<<endl;
}
