#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int dirX[]={1,0,-1,0};
int dirY[]={0,1,0,-1};

//double bfs
//first bfs to reach the farthest point from any point.(one of the extremes of the maze)
//second bfs measures the farthest point from that point and gives the correct answer.

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int c,r;
		cin>>c>>r;
		char maze[r][c];
		int visit[r][c]={0};
		bool once=false;
		queue<pair<pair <int,int>,int> >  q;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>maze[i][j];
				if(maze[i][j]=='.' && !once){
					once=true;
					q.push(make_pair(make_pair(i,j),0));
					visit[i][j]=true;
				}
			}
		}

		int longX=0;
		int longY=0;
		while(!q.empty()){
			pair<pair<int,int>,int> p=q.front();q.pop();
			for(int i=0;i<4;i++){
				int x=p.first.first+dirX[i];
				int y=p.first.second+dirY[i];
				if(x>=0 && x<r && y>=0 && y<c && !visit[x][y] && maze[x][y]!='#'){
					q.push(make_pair(make_pair(x,y),p.second+1));
					visit[x][y]=true;
				}
				if(q.empty()){
					longX=p.first.first;
					longY=p.first.second;
				}
			}
		}
		for(int i=0;i<r;i++)fill(visit[i],visit[i]+c,false);

		q.push(make_pair(make_pair(longX,longY),0));
		visit[longX][longY]=true;
		int maxLength=0;
		while(!q.empty()){
				pair<pair<int,int>,int> p=q.front();q.pop();
				for(int i=0;i<4;i++){
					int x=p.first.first+dirX[i];
					int y=p.first.second+dirY[i];
					if(x>=0 && x<r && y>=0 && y<c && !visit[x][y] && maze[x][y]!='#'){
						q.push(make_pair(make_pair(x,y),p.second+1));
						visit[x][y]=true;
						maxLength=std::max(maxLength,p.second+1);
					}
				}
			}
		cout<<"Maximum rope length is "<<maxLength<<'.'<<endl;
	}
}