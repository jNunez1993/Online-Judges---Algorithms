#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    long long a[n];
    int neg = 0;
    int p = 0;
    int z = 0;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if (a[i] < 0) neg++;
        else if (a[i] == 0) z++;
        else p++;

    }

    int total_neg = negatives * positives;
    int total_p = positives + (negatives * negatives);
    int total_z = (negatives + positives) * zeros;

    sort(a, a+n);

    if (k <= total_neg) {
        int index = 0;
        int temp = p;
        while (temp < k) {
            index++;
        }

        int g = k % p;
        cout<<a[index] * a[n-1-g]<<endl;
    } else if (k <= total_neg + total_z) {
        cout<<0<<endl;
    } else {

    }
}

