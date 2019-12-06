#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void solve(int n) {
    int root = (int)sqrt(n);
    if (pow(root, 2) == n) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

int main() {
    int n;
    while (scanf("%d", &n) && n) {
        solve(n);
    }
}
