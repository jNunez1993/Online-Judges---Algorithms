#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int total = 4*60 - k;
    int canSolve = 0;
    for (int i = 1; i <= n && total - 5*i>=0; i++) {
        total -= (5*i);
        canSolve++;
    }
    cout<<canSolve<<endl;
}
