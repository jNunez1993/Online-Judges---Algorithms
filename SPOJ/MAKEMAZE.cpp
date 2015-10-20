#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int dirX[]={1,0,-1,0};
int dirY[]={0,1,0,-1};
int m,n;
char g[102][102];
bool visited[22][22];


bool isOuter(int x,int y){
	if(x+1==m || y+1==n || x-1==-1 || y-1==-1)return true;
	return false;
}

bool can(int x,int y){
	if(g[x][y]!='#' && x>=0 && x<m && y>=0 && y<n)return true;
	return false;
}


void dfs(int u,int v){
	visited[u][v]=true;
	for(int i=0;i<4;i++){
		int x=u+dirX[i];
		int y=v+dirY[i];
		if(!visited[x][y] && can(x,y)){
			dfs(x,y);
		}
	}
}


int main(){
	int T;
	cin>>T;
	while(T--){
		vector<pair<int,int> > v;
		cin>>m>>n;
		memset(visited,false,sizeof visited);
		memset(g,0,sizeof g);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>g[i][j];
				if(g[i][j]=='.' && isOuter(i,j)){
					v.push_back(make_pair(i,j));
				}
			}
		}
		bool flag=false;
		if(v.size()==2){
			flag=true;
			int px=v[0].first;
			int py=v[0].second;
			int pxx=v[1].first;
			int pyy=v[1].second;
			dfs(px,py);
			if(visited[pxx][pyy]){
				cout<<"valid"<<endl;
			}
			else{
				cout<<"invalid"<<endl;
			}
		}

		if(!flag)cout<<"invalid"<<endl;

	}
}