#include <iostream>
#include <map>
#define INF 2147483647;
using namespace std;


int main() {
    int n,k;
    cin>>n;
    map<int, int> m;
    int mn = INF;
    int idx = 0;
    for (int i = 0; i < n; i++) {
        cin>>k;
        m[k]++;
        if (k < mn) {
            mn = k;
            idx = i+1;
        }
    }

    if (m[mn] > 1) {
        cout<<"Still Rozdil"<<endl;
    } else {
        cout<<idx<<endl;
    }
}
