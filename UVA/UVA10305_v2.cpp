#include <bits/stdc++.h>
using namespace std;
int visited[101];
vector<int> graph[101];
vector<int> s;

void dfs(int v1) {
    visited[v1] = 1;
    for (int i = 0; i < graph[v1].size(); i++) {
        if (!visited[graph[v1][i]]) {
            dfs(graph[v1][i]);
        }
    }
    s.push_back(v1);
}

int main() {
    int n, m;
    while (cin>>n>>m) {
        if (n == 0 && m == 0) break;
        memset(visited, 0, sizeof(int) * 101);
        for (int i = 0; i < 101; i++) graph[i].clear();
        s.clear();

        int v1, v2;
        for (int i = 0; i < m; i++) {
            cin>>v1>>v2;
            graph[v1].push_back(v2);
        }

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) dfs(i);
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
}
