#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
//CLASSIC DIJKSTRA'S ALGORITHM.
//STRAIGHTFORWARD IMPLEMENTATION.

int main(){
	int cases;
	cin>>cases;
	int num=1;
	while(cases--){
		int n,m,s,t;
		cin>>n>>m>>s>>t;
		vector<pair<int,int> > vec[n];
		vector<int> dist;
		dist.assign(n,INF);
		int u1,v1,w;
		for(int i=0;i<m;i++){
			cin>>u1>>v1>>w;
			vec[u1].push_back(make_pair(v1,w));
			vec[v1].push_back(make_pair(u1,w));
		}
		dist[s]=0;
		priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
		pq.push(make_pair(0,s));
		while(!pq.empty()){
			pair<int,int> front= pq.top(); pq.pop();
			int d= front.first;
			int u=front.second;
			if(d > dist[u]) continue;
			for(int i=0;i<vec[u].size();i++){
				pair<int,int> v= vec[u][i];
				if(dist[u]+v.second < dist[v.first]){
					dist[v.first] = dist[u]+v.second;
					pq.push(make_pair(dist[v.first],v.first));
				}
			}
		}
		if(dist[t]==INF) printf("Case #%d: unreachable\n",num);
		else printf("Case #%d: %d\n",num,dist[t]);
		num++;
	}
	return 0;
}