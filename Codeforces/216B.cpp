#include <bits/stdc++.h>
using namespace std;
int visited[101];
vector<int> graph[101];
int color[101];
int ans = 0;

void colorGraph(int v1) {
    int c = 0;
    color[v1] = c;
    visited[v1] = 1;
    queue<int> q;
    q.push(v1);
    while (!q.empty()) {
        int top = q.front();
        int c = 1 - color[top];
        q.pop();
        for (int i = 0; i < graph[top].size(); i++) {
            int v2 = graph[top][i];
            if (color[v2] == -1) {
                color[v2] = c;
            }

            if (!visited[v2]) {
                visited[v2] = 1;
                q.push(v2);
            }
        }
    }
}

void bfs(int v1) {
    queue<int> q;
    q.push(v1);
    visited[v1] = true;
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        for (int i = 0; i < graph[top].size(); i++) {
            int v2 = graph[top][i];
            if (color[top] == color[v2])
                ans++;
            if (!visited[v2]) {
                visited[v2] = 1;
                q.push(v2);
            }
        }
    }
}

int main() {
    int n, m;
    cin>>n>>m;
    memset(visited, 0, sizeof(int) * 101);
    memset(color, -1, sizeof(int) * 101);
    int v1, v2;
    set<int> vertices;
    for (int i = 0; i < m; i++) {
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        vertices.insert(v1);
        vertices.insert(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i] && vertices.count(i) == 1) {
            colorGraph(i);
        }
    }

    memset(visited, 0, sizeof(int) * 101);
    for (int i = 1; i <= n; i++) {
        if (!visited[i] && vertices.count(i) == 1) {
            bfs(i);
        }
    }
    ans /= 2;
    ans = (n-ans) % 2 == 1? ans+1 : ans;
    cout<<ans<<endl;
}
