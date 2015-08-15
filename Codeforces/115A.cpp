#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n;
int graph[2005];

int dfs(int u){
	if(u==-1)return 1;
	return dfs(graph[u])+1;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>graph[i];
	}
	int max=0;
	for(int i=1;i<=n;i++){
		max=std::max(max,dfs(graph[i]));
	}
	cout<<max<<endl;

}