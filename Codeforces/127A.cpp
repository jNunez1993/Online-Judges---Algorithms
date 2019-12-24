#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n, k;
    cin>>n;
    cin>>k;
    double x[n];
    double y[n];
    for (int i = 0; i < n; i++) {
        cin>>x[i];
        cin>>y[i];
    }

    double xp = x[0];
    double yp = y[0];
    double dist = 0;
    for (int i = 1; i < n; i++) {
        double d = sqrt(pow(xp - x[i], 2) + pow(yp-y[i], 2));
        dist += d;
        xp = x[i];
        yp = y[i];
    }

    dist *= (double)k;
    cout<<fixed<<showpoint<<setprecision(8);
    cout<<dist/50<<endl;
}
