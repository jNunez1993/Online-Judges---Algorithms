#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int res = 0;

    if (n == 20) {
        res = 15;
    }
    else if ((n == 21) || (n > 10 && n < 20)) {
        res = 4;
    }

    cout<<res<<endl;
}
