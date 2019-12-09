#include <bits/stdc++.h>
using namespace std;
int visited[25][25];
int n;
string image[25];

int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[8] = {1, -1, 0, 0, -1, -1, 1, 1};
int npos = 8;

int canVisit(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= n) return false;
    if (visited[i][j]) return false;
    return true;
}

void dfs(int i, int j) {
    visited[i][j] = 1;
    for (int k = 0; k < npos; k++) {
        int next_i = i + dx[k];
        int next_j = j + dy[k];
        if (canVisit(next_i, next_j) && image[next_i][next_j] == '1' ) dfs(next_i, next_j);
    }
}

int main() {
    int t = 1;
    while (cin>>n) {
        memset(visited, 0, sizeof(visited[0][0]) * 25 * 25);

        for (int i = 0; i < n; i++) {
            cin>>image[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (image[i][j] == '1' && !visited[i][j]) {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", t, ans);
        t++;
    }
}
