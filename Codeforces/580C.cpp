#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,m;
vector<vector<int> > g;
int c[100005]={0};
int visited[100005]={0};
int leaf[100005]={0};


int dfs(int v,int cc){
	visited[v]=1;
	if(cc>m)return 0;
	if(g[v].size()==1 && visited[g[v][0]]==1)return 1;
	int cnt=0;
	for(int i=0;i<g[v].size();i++){
		int e=g[v][i];
		if(!visited[e]){
			if(c[e]==1)cnt+=dfs(e,cc+1);
			else cnt+=dfs(e,0);
		}
	}
	return cnt;
}

int main(){
	cin>>n>>m;
	g.resize(100005);
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	int from,to;
	for(int i=0;i<n-1;i++){
		cin>>from>>to;
		g[from].push_back(to);
		g[to].push_back(from);
	}
	int ans=dfs(1,c[1]);
	cout<<ans<<endl;
}