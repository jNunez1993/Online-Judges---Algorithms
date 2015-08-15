#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1000000000
using namespace std;
int n,e,t,m;

class Compare{
public:
	bool operator()(pair<int,int> p1,pair<int,int> p2){
		return p1.first>p2.first;
	}
};


int main(){
	int cases;
	cin>>cases;
	while(cases--){
		cin>>n>>e>>t>>m;
		vector<pair<int,int> > graph[105];
		vector<int> dist; 
		dist.assign(n+1,INF);
		int from,to,weight;
		for(int i=0;i<m;i++){
			cin>>from>>to>>weight;
			graph[to].push_back(make_pair(weight,from));
		}

		priority_queue<pair<int,int>,vector<pair<int,int> >,Compare > pq;
		dist[e]=0;
		pq.push(make_pair(0,e));
		while(!pq.empty()){
			pair<int,int> node=pq.top();pq.pop();
			int d=node.first;
			int u=node.second;
			if(d>dist[u])continue;
			for(int i=0;i<graph[u].size();i++){
				pair<int,int> v=graph[u][i]; //v.first=weight;v.second=vertex
				if(d+v.first<dist[v.second]){
					dist[v.second]=d+v.first;
					pq.push(make_pair(dist[v.second],v.second));
				}
			}
		}
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(dist[i]<=t)cnt++;
		}
		cout<<cnt<<endl;
		if(cases!=0)cout<<endl;
	}
}