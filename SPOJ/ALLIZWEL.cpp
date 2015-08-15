#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int r,c;
int xdir[8]={1,0,-1,0,1,-1,-1,1};
int ydir[8]={0,1,0,-1,1,1,-1,-1};
char grid[105][105];
bool visit[105][105]={0};
string answer="ALLIZZWELL";
 
int dfs(int x,int y, int next){
	visit[x][y]=true;
	if(next==10)return 0;
	int ans=0;
	for(int i=0;i<8;i++){
		int dx=x+xdir[i];
		int dy=y+ydir[i];
		if(!visit[dx][dy] && grid[dx][dy]==answer[next] && dx>=0 && dx<r && dy>=0 && dy<c){
			ans=std::max(ans,dfs(dx,dy,next+1)+1);	
		}
	}
	visit[x][y]=false;
	return ans;
}
 
 
int main(){
	int cases;
	cin>>cases;
	while(cases--){
		cin>>r>>c;
		vector<pair<int,int> > hold;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>grid[i][j];
				if(grid[i][j]=='A') hold.push_back(make_pair(i,j));
			}
		}
		bool yes=false;
		for(int i=0;i<hold.size();i++){
			pair<int,int> p=hold[i];
			memset(visit,0,sizeof visit);
			int ret=dfs(p.first,p.second,1);
			if(ret==9){
				yes=true;
				break;
			}
		}
		if(yes)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
} 