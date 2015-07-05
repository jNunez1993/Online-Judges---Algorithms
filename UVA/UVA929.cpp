#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

//GETS TLE but logic is correct

struct Point{
	int x;
	int y;
	int distance;
	Point(int x,int y,int distance){
		this->x=x;
		this->y=y;
		this->distance=distance;
	}
	bool operator <(const Point& other) const{
		return distance<other.distance;
	}
};





int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int r,c;
		scanf("%d %d",&r,&c);
		int grid[r+2][c+2];
		int dirX[]={0,1,0,-1}; 
		int dirY[]={1,0,-1,0};
		for(int i=0;i<r+2;i++){
			for(int j=0;j<c+2;j++){
				if(i==0 || i==r+1 || j==0 || j==c+1)
					grid[i][j]='x';
				else 
					scanf("%d",&grid[i][j]);
			}
		}
		int dist[r+2][c+2];
		for(int i=0;i<r+2;i++){
			fill(dist[i],dist[i]+c+2,INF);
		}

		dist[1][1]=grid[1][1];
		priority_queue<Point> pq;
		Point source(1,1,0);
		pq.push(source);
		while(!pq.empty()){
			Point front=pq.top();pq.pop();
			int d=front.distance;
			int x=front.x;
			int y=front.y;
			if(d>dist[x][y]) continue;
			for(int i=0;i<4;i++){
				int newX=x+dirX[i];
				int newY=y+dirY[i];
				if(grid[newX][newY]!='x' && dist[x][y]+grid[newX][newY]<dist[newX][newY]){
					dist[newX][newY]=dist[x][y]+grid[newX][newY];
					pq.push(Point(newX,newY,dist[newX][newY]));
				}	
			}
		}
		printf("%d\n",dist[r][c]);
	}
}