#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#include <limits>
#include <iterator>
using namespace std;
char grid[200][200];
int dirX[]={1,-1,0,0};
int dirY[]={0,0,1,-1};

struct Point{
	char c;
	int x;
	int y;
	int d;
	Point(){}
	Point(char c,int x,int y,int d){
		this->c=c;
		this->x=x;
		this->y=y;
		this->d=d;
	}
};

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int n,m;
		cin>>n>>m;
		string s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		queue<Point> q;
		bool visit[200][200]={0};
		int sol[200][200]={0};

		for(int i=0;i<=n+1;i++){
			for(int j=0;j<=m+1;j++){
				if(i==0 || j==0 || i==n+1 || j==m+1) grid[i][j]='x';
				else if(s[i-1][j-1]=='1'){
					visit[i][j]=true;
					q.push(Point(grid[i][j],i,j,0));
					sol[i][j]=0;
				}
				else{ 
					grid[i][j]=s[i-1][j-1];
				}
			}
		}
		//bfs
		Point c;
		while(!q.empty()){
			c=q.front();
			q.pop();
			for(int i=0;i<4;i++){
				int xdir=c.x+dirX[i];
				int ydir=c.y+dirY[i];
				if(!visit[xdir][ydir] && grid[xdir][ydir]!='x'){
					q.push(Point(grid[xdir][ydir],xdir,ydir,c.d+1));
					sol[xdir][ydir]=c.d+1;
					visit[xdir][ydir]=true;
				}
			}
		}
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				printf("%d ",sol[i][j]);
			}
			printf("\n");
		}
		if(cases!=0)cout<<endl;
		
	}
}