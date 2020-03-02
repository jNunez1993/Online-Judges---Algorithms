#include <iostream>
using namespace std;

int lower_iterative(int *c, int n, int target) {
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high) {
        int middle = low + (high - low)/2;

        if (c[middle] < target) {
            low = middle + 1;
            ans = c[middle];
        } else {
            high = middle - 1;
        }
    }
    return ans;
}

int upper_iterative(int *c, int n, int target) {
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high) {
        int middle = low + (high - low)/2;

        if (c[middle] > target) {
            high = middle - 1;
            ans = c[middle];
        } else {
            low = middle + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int c[n];
    for (int i = 0; i < n; i++) {
        cin>>c[i];
    }
    int qn;
    cin>>qn;
    int q[qn];
    for (int i = 0; i< qn; i++) {
        cin>>q[i];
        int lower = lower_iterative(c, n, q[i]);
        int upper = upper_iterative(c, n, q[i]);
        if (lower != -1) cout<<lower<<" ";
        else cout<<"X"<<" ";
        if (upper != -1) cout<<upper<<endl;
        else cout<<"X"<<endl;
    }
}
