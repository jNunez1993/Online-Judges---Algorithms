#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int mx = 1;
    for (int i = 0; i < n; i++) {
        int j = i-1;
        int num = 0;
        while (j >= 0) {
            if (a[j] <= a[j+1]) {
                num++;
                j--;
            } else break;
        }

        j = i+1;
        while (j < n) {
            if (a[j] <= a[j-1]) {
                num++;
                j++;
            } else break;
        }

        num+=1;
        mx = max(mx, num);
    }

    cout<<mx<<endl;
}
