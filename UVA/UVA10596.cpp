#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
vector<bool> visit;
vector<int> v[10005];

int dfs(int u){
	visit[u]=true;
	for(int i=0;i<v[u].size();i++){
		int vertex=v[u][i];
		if(!visit[vertex])dfs(vertex);
	}
}

int main(){
	int n,r;
	while(cin>>n>>r){
		int c1,c2;
		visit.assign(10005,false);
		vector<int> degrees;
		degrees.assign(10005,0);
		vector<int> usedV;
		for(int i=0;i<r;i++){
			cin>>c1>>c2;
			v[c1].push_back(c2);
			v[c2].push_back(c1);
			usedV.push_back(c1);
			usedV.push_back(c2);
			degrees[c1]++;
			degrees[c2]++;
		}
		bool isPossible=true;
		for(int i=0;i<n;i++){
			if(degrees[i]%2!=0){
				isPossible=false;
				break;
			}
		}

		if(r!=0)
			dfs(0);

		for(int i=0;i<usedV.size();i++){
			if(!visit[usedV[i]]){
				isPossible=false;
				break;
			}
		}
		


		if(isPossible && r!=0)printf("Possible\n");
		else printf("Not Possible\n");
	}
}