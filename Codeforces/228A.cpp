#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 4;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) cnt++;
    }
    cout<<cnt<<endl;
}

