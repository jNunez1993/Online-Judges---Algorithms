#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    string before = "00";
    string after = "00";
    int groups = 1;
    for (int i = 0; i < n; i++) {
        before = after;
        cin>>after;
        if (before != "00" && after != before) groups++;
    }
    cout<<groups<<endl;
}
