#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, t, c;
    cin>>n>>t>>c;
    int arr[n];
    int k;
    for (int i = 0; i < n; i++) {
        cin>>k;
        arr[i] = k > t ? 0 : 1;
    }

    int prefix[n];
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + arr[i-1];
    }

    int ways = 0;

    for (int i = c; i <= n; i++) {
        if (prefix[i] - prefix[i - c] == c) {
            ways++;
        }
    }

    cout<<ways<<endl;
}
