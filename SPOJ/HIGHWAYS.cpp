#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int n,m,s,e;
		cin>>n>>m>>s>>e;
		vector<pair<int,int> > graph[n+1];
		int u1,v1,w1;
		for(int i=0;i<m;i++){
			cin>>u1>>v1>>w1;
			graph[u1].push_back(make_pair(w1,v1));
			graph[v1].push_back(make_pair(w1,u1));
		}
		vector<int> dist;
		dist.assign(n+1,INF);
		priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
		dist[s]=0;
		pq.push(make_pair(0,s));
		while(!pq.empty()){
			pair<int,int> front= pq.top();pq.pop();
			int w=front.first;
			int u=front.second;
			if(w>dist[u])continue;
			for(int i=0;i<graph[u].size();i++){
				pair<int,int> v=graph[u][i];
				if(dist[u]+v.first<dist[v.second]){
					dist[v.second]=dist[u]+v.first;
					pq.push(make_pair(dist[v.second],v.second));
				}
			}
		}
		if(dist[e]==INF)cout<<"NONE"<<endl;
		else cout<<dist[e]<<endl;
	}
}