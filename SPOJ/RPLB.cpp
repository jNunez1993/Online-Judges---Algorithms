#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,k;
int a[1005]; 
int memo[1005][1005];

int solve(int i,int j){
	if(i>=n)return 0;
	if(memo[i][j]!=-1)return memo[i][j];
	int s1=0,s2=0;
	if(j+a[i]<=k)
		s1=solve(i+2,j+a[i])+a[i];
	s2=solve(i+1,j);
	return memo[i][j]=std::max(s1,s2);
}


int main(){
	int cases;
	cin>>cases;
	int scen=1;
	while(cases--){
		cin>>n>>k;
		memset(memo,-1,sizeof memo);
		for(int i=0;i<n;i++)cin>>a[i];
		int ans=solve(0,0);
		printf("Scenario #%d: %d\n",scen,ans);
		scen++;
	}
}