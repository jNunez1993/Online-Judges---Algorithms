#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
set<int> s;
int a,b;
vector<vector<int> > g;


bool isPrime(int n){
	if(n%2==0)return false;
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0)return false;
	}
	return true;
}

void init(){
	for(int i=1000;i<=9999;i++){
		if(isPrime(i))s.insert(i);
	}
}

int* split(int n){
	int* digs = new int[4];
	int idx=3;
	while(n!=0){
		digs[idx--]=n%10;
		n/=10;
	}
	return digs;
}

int make(int* digs,int n,int pos){
	digs[pos]=n;
	return digs[0]*pow(10,3)+digs[1]*pow(10,2)+digs[2]*10+digs[3];
}

void build(){
	std::set<int>::iterator it=s.begin();
	for(;it!=s.end();it++){
		int* digs=split(*it);
		int idx=0;
		for(int i=0;i<4;i++){
			int cdig=digs[i];
			for(int j=0;j<=9;j++){
				int nn=make(digs,j,i);
				if(j!=cdig && s.count(nn)){
					g[*it].push_back(nn);
					g[nn].push_back(*it);
				}
			}
			digs[i]=cdig;
		}
	}
}

int bfs(int source,int target){
	int visited[10005]={0};
	int cost[10005];
	queue<int> q;
	q.push(source);
	visited[source]=1;
	cost[source]=0;
	while(!q.empty()){
		int u=q.front();q.pop();
		int c=cost[u];
		for(int i=0;i<g[u].size();i++){
			int adj=g[u][i];
			if(!visited[adj]){
				cost[adj]=c+1;
				visited[adj]=1;
				q.push(adj);
			}
			if(adj==target){
				return cost[adj];
			}
		}
	}
	return -1;
}


int main(){
	g.resize(10005);
	init();
	build();
	int T;
	cin>>T;
	while(T--){
		cin>>a>>b;
		int ans=bfs(a,b);
		if(ans==-1)cout<<"Impossible"<<endl;
		else cout<<ans<<endl;
	}

}