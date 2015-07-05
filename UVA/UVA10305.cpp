#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


vector<int> ans;
vector<int> v[100];
bool visit[200]={0};


void dfs(int u){
	visit[u]=true;
	for(int i=0;i<v[u].size();i++){
		int e=v[u][i];
		if(!visit[e])dfs(e);
	}
	ans.push_back(u);
}

int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0)break;
		ans.clear();
		for(int i=0;i<100;i++){
			v[i].clear();
		}
		memset(visit,false,sizeof visit);
		int a,b;
		for(int i=0;i<m;i++){
			cin>>a>>b;
			v[a].push_back(b);
		}


		for(int i=1;i<=n;i++){
			if(!visit[i])dfs(i);
		}

		
		for(int i=n-1;i>=0;i--){
			printf("%d ",ans[i]);
		}
		printf("\n");
	}
}