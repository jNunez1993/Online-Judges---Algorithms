#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

class Robot{
public:
	Robot(){};
	Robot(int x,int y,char orientation){
		this->x=x;
		this->y=y;
		this->orientation=orientation;
	}
	int x;
	int y;
	char orientation;
	void setOrientation(char c){
		if(c=='D'){
			if(orientation=='N') orientation='L';
			else if(orientation=='L') orientation='S';
			else if(orientation=='S') orientation='O';
			else if(orientation=='O') orientation='N';
		}
		else if(c=='E'){
			if(orientation=='N') orientation='O';
			else if(orientation=='L') orientation='N';
			else if(orientation=='S') orientation='L';
			else if(orientation=='O') orientation='S';
		}
	}
};


int getX(char c, char orientation){
	if(orientation=='N' && c=='F') return -1;
	if(orientation=='L' && c=='F') return 0;
	if(orientation=='S' && c=='F') return 1;
	if(orientation=='O' && c=='F') return 0;
	if(orientation=='N' && c=='D') return 0;
	if(orientation=='L' && c=='D') return 1;
	if(orientation=='S' && c=='D') return 0;
	if(orientation=='O' && c=='D') return -1;
	if(orientation=='N' && c=='E') return 0;
	if(orientation=='L' && c=='E') return -1;
	if(orientation=='S' && c=='E') return 0;
	if(orientation=='O' && c=='E') return 1;
	return 0;
}

int getY(char c, char orientation){
	if(orientation=='N' && c=='F') return 0;
	if(orientation=='L' && c=='F') return 1;
	if(orientation=='S' && c=='F') return 0;
	if(orientation=='O' && c=='F') return -1;
	if(orientation=='N' && c=='D') return 1;
	if(orientation=='L' && c=='D') return 0;
	if(orientation=='S' && c=='D') return -1;
	if(orientation=='O' && c=='D') return 0;
	if(orientation=='N' && c=='E') return -1;
	if(orientation=='L' && c=='E') return 0;
	if(orientation=='S' && c=='E') return 1;
	if(orientation=='O' && c=='E') return 0;
	return 0;
}

//D = RIGHT
//E = LEFT;
//F = FOWARD;
//N = NORTH
//S = SOUTH
//L = EAST
//O - WEST
int main(){
	int n,m,s;
	while(cin>>n>>m>>s){
		if(n==0 && m==0 && s==0) break;
		string ins;
		Robot robot;
		char grid[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>grid[i][j];
				if(grid[i][j]!='.' && grid[i][j]!='*' && grid[i][j]!='#'){
					robot.x=i;
					robot.y=j;
					robot.orientation=grid[i][j];
					grid[i][j]='.';
				}
			}
		}
		cin>>ins;
		int taken=0;
		for(int i=0;i<s;i++){
			if(ins[i]=='D') robot.setOrientation(ins[i]);
			else if(ins[i]=='E')robot.setOrientation(ins[i]);
			else{
				int moveToX=robot.x+getX(ins[i],robot.orientation);
				int moveToY= robot.y+getY(ins[i],robot.orientation);
				if(moveToX>=0 && moveToX<=n-1 && moveToY>=0 && moveToY<=m-1 && grid[moveToX][moveToY]!='#'){
					robot.setOrientation(ins[i]);
					robot.x=moveToX;
					robot.y=moveToY;
					if(grid[robot.x][robot.y]=='*'){
						taken++;
						grid[robot.x][robot.y]='.';
					}
				}
			}
		}
		cout<<taken<<endl;
	}

}