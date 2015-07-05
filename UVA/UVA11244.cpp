#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int dirX[]={1,0,-1,0,1,-1,1,-1};
int dirY[]={0,1,0,-1,1,1,-1,-1};

int main(){
	int r,c;
	while(cin>>r>>c){
		if(r==0 && c==0) break;
		char grid[105][105];
		for(int i=0;i<105;i++){
			for(int j=0;j<105;j++){
				grid[i][j]='.';
			}
		}
		queue<pair<int,int> > q;
		
		for(int i=0;i<r+2;i++){
			for(int j=0;j<r+2;j++){
				if(i==0 || i==r+1 || j==0 || c+1) grid[i][j]='.';
			}
		}
		for(int i=1;i<r+1;i++){
			for(int j=1;j<c+1;j++){
				cin>>grid[i][j];
				if(grid[i][j]=='*'){
					q.push(make_pair(i,j));
				}
			}
		}
		
		int size=q.size();
		int cnt=0;
		for(int i=0;i<size;i++){
			pair<int,int> e=q.front(); q.pop();
			int space=0;
			for(int j=0;j<8;j++){
				int x=e.first+dirX[j];
				int y=e.second+dirY[j];
				if(grid[x][y]!='*')space++;
				else break;
				if(space==8)cnt++;
			}
		}
		cout<<cnt<<endl;
		
	}
}