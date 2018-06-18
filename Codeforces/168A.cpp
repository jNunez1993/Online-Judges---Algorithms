#include <iostream>
#include <cmath>
using namespace std;

/*
 * n = amount of people in city
 * x = the number of wizards
 * y = percentage required
 */
int main() {
    double n,x,y;
    cin>>n>>x>>y;

    double f = ceil((y/100 * n) - x);
    if (f <= 0) f = 0;
    cout<<f<<endl;
}
