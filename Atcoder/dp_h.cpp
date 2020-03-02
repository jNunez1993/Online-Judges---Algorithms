#include <bits/stdc++.h>
using namespace std;
int M = 1000000007;
vector<string> grid;
int cache[1005][1005];

int solve(int h, int w, int i, int j) {
    if (i >= h || j >= w) return 0;
    if (grid[i][j] == '#') return 0;

    if (i == h-1 && j == w-1) {
        return 1;
    }

    if (cache[i][j] != -1) return cache[i][j];


    int p1 = solve(h, w, i+1, j);
    int p2 = solve(h, w, i, j+1);
    int ans = (p1 + p2)%M;
    cache[i][j] = ans;
    return ans;
}

int main() {
    int h, w;
    cin>>h>>w;
    grid.resize(h);
    for (int i = 0; i < h; i++) {
        cin>>grid[i];
    }

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cache[i][j] = -1;

    cout<<solve(h, w, 0, 0)<<endl;
}
