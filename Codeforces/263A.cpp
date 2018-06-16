#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int k;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin>>k;
            if (k) {
                int res = abs(i+1-3) + abs(j+1-3);
                cout<<res<<endl;
                return 0;
            }
        }
    }

}
