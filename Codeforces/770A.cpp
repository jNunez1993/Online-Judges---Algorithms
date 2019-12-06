#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string password = "";
    for (int i = 0; i < n; i++) {
        password += alphabet[i%k];
    }
    cout<<password<<endl;
}

