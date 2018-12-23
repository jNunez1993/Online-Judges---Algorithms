#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;
vector<vector<int> > graph;
int visited[30][30];

int dfs(int node) {
    vector<int> adjacents = graph[node];
    int length = 0;
    for (int i = 0; i < adjacents.size(); i++) {
        if (!visited[node][adjacents[i]]) {
            visited[node][adjacents[i]] = true;
            visited[adjacents[i]][node] = true;
            length = std::max(length, 1 + dfs(adjacents[i]));
            visited[node][adjacents[i]] = false;
            visited[adjacents[i]][node] = false;
        }
    }
    return length;
}

int main() {
    int n,m;
    while (true) {
        cin>>n>>m;
        if (n == 0 && m == 0) break;
        graph.clear();
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < n; i++) {
            vector<int> v;
            graph.push_back(v);
        }
        int node1,node2;
        for (int i = 0; i < m; i++) {
            cin>>node1>>node2;
            graph[node1].push_back(node2);
            graph[node2].push_back(node1);
        }
        int length = 0;
        for (int i = 0; i < n; i++) {
            length = max(length, dfs(i));
        }
        cout<<length<<endl;
    }
}
