#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> graph[n+1];
    int v1, v2;
    for (int i = 0; i < m; i++) {
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    int ans = 0;
    while (true) {
        vector<int> remove;
        vector<int> neighbor;
        for (int i = 1; i <= n; i++) {
            if (graph[i].size() == 1) {
                remove.push_back(i);
                neighbor.push_back(graph[i][0]);
            }
        }

        for (int i = 0; i < remove.size(); i++) {
            graph[remove[i]].clear();
            int neigh = neighbor[i];
            vector<int>::iterator pos = find(graph[neigh].begin(), graph[neigh].end(), remove[i]);
            if (pos != graph[neigh].end()) {
                graph[neigh].erase(pos);
            }
        }

        if (remove.size() == 0) break;
        ans++;
    }
    cout<<ans<<endl;
}
