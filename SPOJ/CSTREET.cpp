#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

class UnionFind{
public:
	UnionFind(int n){
		rank.assign(n+1,0);
		p.assign(n+1,0);
		for(int i=1;i<=n;i++)p[i]=i;
	}
	int findSet(int i){
		return (p[i]==i)? i:(p[i]=findSet(p[i]));
	}
	bool isSameSet(int i,int j){
		return findSet(i)==findSet(j);
	}
	void unionSet(int i,int j){
		if(!isSameSet(i,j)){
			int x=findSet(i);
			int y=findSet(j);
			if(rank[x]>rank[y])p[y]=x;
			else{
				p[x]=y;
				if(rank[x]==rank[y])rank[y]++;
			}
			
		}
	}
private:
	vector<int> p;
	vector<int> rank;
};

int main(){
	int cases,p,n,m;
	cin>>cases;
	while(cases--){
		cin>>p>>n>>m;
		vector<pair<int, pair<int,int> > > graph;
		int u,v,w;
		for(int i=0;i<m;i++){
			cin>>u>>v>>w;
			graph.push_back(make_pair(w,make_pair(u,v)));
		}
		int mst_cost=0;
		UnionFind UF(n);
		sort(graph.begin(),graph.end());
		for(int i=0;i<m;i++){
			pair<int,pair<int,int> > top=graph[i];
			if(!UF.isSameSet(top.second.first,top.second.second)){
				mst_cost+=top.first;
				UF.unionSet(top.second.first,top.second.second);
			}
		}
		cout<<mst_cost*p<<endl;

	}
}