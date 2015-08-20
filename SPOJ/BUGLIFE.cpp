#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
vector<int> graph [2005];
bool visit[2005]={0};
int color[2005]={-1};

bool bfs(int source){
	queue<int> q;
	q.push(source);
	color[source]=0;
	visit[source]=true;
	while(!q.empty()){
		int element=q.front();q.pop();
		int ec=color[element];
		for(int i=0;i<graph[element].size();i++){
			int adjacent=graph[element][i];
			if(element != adjacent && color[adjacent]==ec)
				return true;
			if(!visit[adjacent]){
				visit[adjacent]=true;
				color[adjacent]=1-ec;
				q.push(adjacent);
			}
		}
	}
	return false;
}

int main(){
	int cases;
	int num=1;
	int bugs,interactions;
	cin>>cases;
	while(cases--){
		memset(visit,0,sizeof visit);
		memset(color,-1,sizeof color);
		for(int i=0;i<2005;i++)graph[i].clear();
		cin>>bugs>>interactions;
		int x,y;
		for(int i=0;i<interactions;i++){
			cin>>x>>y;
			graph[x].push_back(y);
			graph[y].push_back(x);
		}
		bool ans=false;
		for(int i=1;i<=bugs;i++){
			if(!visit[i]){
				ans=std::max(ans,bfs(i));
				if(ans==1)break;
			}
		}

		if(ans)
			printf("Scenario #%d:\nSuspicious bugs found!\n",num++);
		else
			printf("Scenario #%d:\nNo suspicious bugs found!\n",num++);

	}
}