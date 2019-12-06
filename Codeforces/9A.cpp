#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int y, w;
    cin>>y>>w;
    int m = max(y, w);
    int chances = 6 - m + 1;
    int divisor = gcd(chances, 6);
    cout<<chances/divisor<<"/"<<6/divisor<<endl;
}
