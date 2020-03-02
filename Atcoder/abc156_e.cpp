#include <bits/stdc++.h>
using namespace std;

int recurse(int i, int k, int n, int left, int sum) {
    printf("recurse(%d, %d, %d, %d, %d)\n", i, k, n, left, sum);
    if (k == 0 || i >= n) {
        if (k == 0 && i == n && sum == n) return 1;
        else return 0;
    }

    int ans = 0;

    for (int i = 0; i <= left; i++) {
        ans += recurse(i+1, k-1, n, left - i, sum + i);
    }
}

int main() {
    int n, k;
    cin>>n>>k;
    cout<<recurse(0, k, n, n, 0)<<endl;
}

