#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

double solve(int r1, int p1, int p2, int a, int b) {
    //double r2 = (double)(p2 * a) / (M_PI*b*(M_PI/(r1*r1)));
    //double r2 = sqrt((double)p2/(M_PI*b*((p1/(M_PI*r1*r1)/a))));

    double r2 = sqrt((double)(a * p2 * M_PI * r1*r1)/(double)(b*p1*M_PI));
    return r2;
}

int main() {
    int nx, ny, nz;
    cin>>nx;
    int x[nx];
    for (int i = 0; i < nx; i++) {
        cin>>x[i];
    }

    cin>>ny;
    int y[ny];
    for (int i = 0; i < ny; i++) {
        cin>>y[i];
    }

    cin>>nz;
    int z[nz];
    for (int i = 0;i < nz; i++) {
        cin>>z[i];
    }

    int a, b;
    cin>>a>>b;
    double ans = 0;
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                //ans = max(ans, solve(x[i], y[j], z[k], a, b));
                double s = solve(x[i], y[j], z[k], a, b);
                if (s > ans) {
                    cout<<x[i]<<" "<<y[j]<<" "<<z[k]<<endl;
                    ans = s;
                }
            }
        }
    }
    cout<<ans<<endl;
}
