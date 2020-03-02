#include <bits/stdc++.h>
using namespace std;

long long cache[100005][3];

long long vacate(vector<long long>* v, int n, int i, int activity) {
    if (i >= n) {
        return 0;
    }

    if (activity != -1 && cache[i][activity] != -1) {
        return cache[i][activity];
    }

    long long points = 0;
    for (int m = 0; m < 3; m++) {
        if (activity != m) {
            points = max(points, v[i][m] + vacate(v, n, i+1, m));
        }
    }

    cache[i][activity] = points;
    return points;
}

int main() {
    int n;
    cin>>n;
    vector<long long> v[n];

    int a, b, c;
    for (int i = 0; i < n; i++) {
        cin>>a>>b>>c;
        v[i].push_back(a);
        v[i].push_back(b);
        v[i].push_back(c);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cache[i][j] = -1;
        }
    }

    long long points = vacate(v, n, 0, -1);
    cout<<points<<endl;
}
