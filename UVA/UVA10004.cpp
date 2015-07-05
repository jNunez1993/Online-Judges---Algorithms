#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
vector<int>v[205];
bool visit[205];
int color[205];

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int l;
		cin>>l;
		for(int i=0;i<205;i++)v[i].clear();
		memset(visit,false,sizeof visit);
		memset(color,-1,sizeof color);
		int a,b;
		for(int i=0;i<l;i++){
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}

		queue<int> q;
		q.push(0);
		visit[0]=true;
		color[0]=0;
		bool isBipartite=true;
		while(!q.empty() && isBipartite){
			int e=q.front();q.pop();
			for(int i=0;i<v[e].size();i++){
				if(!visit[v[e][i]]){
					q.push(v[e][i]);
					visit[v[e][i]]=true;
					color[v[e][i]]=1-color[e];
				}
				if(color[v[e][i]]==color[e]){
					cout<<"NOT BICOLORABLE."<<endl;
					isBipartite=false;
					break;
				}
			}
		}

		if(isBipartite)cout<<"BICOLORABLE."<<endl; 
	}
}