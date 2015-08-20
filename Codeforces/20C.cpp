#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e16
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,m;
vector<pair<long long,long long> > graph[100005];
vector<long long> dist;
vector<long long> parent(100005);

void dijkstra(){
	priority_queue<pair<long,long>,vector<pair<long,long> >,greater<pair<long,long> > > pq;
	pq.push(make_pair(0,1));
	dist[1]=0;
	while(!pq.empty()){
		pair<long,long> element= pq.top();pq.pop();
		long long u=element.second;
		long long w=element.first;
		if(w>dist[u])continue;
		for(int i=0;i<graph[u].size();i++){
			pair<long,long> adjacent=graph[u][i];
			if(dist[u]+adjacent.first<dist[adjacent.second]){
				long long nweight=dist[u]+adjacent.first;
				dist[adjacent.second]=nweight;
				parent[adjacent.second]=u;
				pq.push(make_pair(nweight,adjacent.second));
			}
		}
	}
}

int main(){
	cin>>n>>m;
	dist.assign(100005,INF);
	for(int i=0;i<=n;i++)parent[i]=i;
	int x,y,z;
	for(int i=0;i<m;i++){
		cin>>x>>y>>z;
		graph[x].push_back(make_pair(z,y));
		graph[y].push_back(make_pair(z,x));
	}
	dijkstra();
	if(dist[n]==INF) {
		cout<<-1<<endl;
		return 0;
	}
	stack<int> s;
	int l=n;
	while(l!=1){
		s.push(l);
		l=parent[l];
	}
	s.push(1);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}