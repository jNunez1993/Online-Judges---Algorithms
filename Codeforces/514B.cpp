#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double x0, y0;
    cin>>n>>x0>>y0;

    vector<pair<double, double>> coords;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin>>a>>b;
        coords.push_back({a, b});
    }

    set<double> slopes;

    for (int i = 0; i < coords.size(); i++) {
        double slope = 0;
        double numerator = y0 - coords[i].second;
        double denom = x0 - coords[i].first;

        if (numerator == 0) slopes.insert(-1e9);
        else if (denom == 0) slopes.insert(1e9);
        else {
            slope = numerator/denom;
            slopes.insert(slope);
        }
    }

    cout<<slopes.size()<<endl;
}
