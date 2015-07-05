#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
struct Station{
	int x;
	int y;
	int n;
	Station(){}
};

struct Edge{
	double dist;
	int stationNumber;
};
Station stations[1005];  
vector<Edge> graph[1005];


double distance(double x0,double y0,double x1,double y1){
	return sqrt(pow(x0-x1,2)+pow(y0-y1,2));
}

void build_graph(int n){
	for(int i=0;i<n;i++){
		double x=stations[i].x;
		double y=stations[i].y;
		Edge first;
		Edge second;
		first.dist=INF;
		second.dist=INF;
		for(int j=0;j<n;j++){
			if(i!=j){
				if(distance(x,y,stations[j].x,stations[j].y)<first.dist){
					first.dist=distance(x,y,stations[j].x,stations[j].y);
					first.stationNumber=stations[j].n;
				}
				else if(distance(x,y,stations[j].x,stations[j].y)<second.dist){
					second.dist=distance(x,y,stations[j].x,stations[j].y);
					second.stationNumber=stations[j].n;
				}

				Edge temp= first;
				if(first.dist<second.dist){
					first=second;
					second=temp;
				}
			}
		}
		if(first.dist!=INF)graph[i].push_back(first);
		if(second.dist!=INF)graph[i].push_back(second);
	}
}

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int a,b;
		for(int i=0;i<1005;i++){
		stations[i].x=0;
		stations[i].y=0;
		stations[i].n=0; 
		graph[i].clear();
		}
		for(int i=0;i<n;i++){
			cin>>a>>b;
			stations[i].n=i;
			stations[i].x=a;
			stations[i].y=b;
		}
		
		build_graph(n);
		
		bool visit[1005]={0};
		queue<int> q;
		q.push(0);
		visit[0]=true;
		while(!q.empty()){
			int e=q.front();q.pop();
			for(int i=0;i<graph[e].size();i++){
				if(!visit[graph[e][i].stationNumber]){
					q.push(graph[e][i].stationNumber);
					visit[graph[e][i].stationNumber]=true;
				}
			}
		}
		bool ran=false;
		for(int i=0;i<n;i++){
			if(!visit[i]){
				cout<<"There are stations that are unreachable."<<endl;
				ran=true;
				break;
			}
		}
		if(!ran) cout<<"All stations are reachable."<<endl;
	}
}