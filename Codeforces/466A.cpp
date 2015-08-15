#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,m,a,b;
int memo[1005];

int solve(int ridesLeft){
	if(ridesLeft<=0)return 0;
	if(memo[ridesLeft]!=-1)return memo[ridesLeft];
	return memo[ridesLeft]=std::min(
		solve(ridesLeft-1)+a,solve(ridesLeft-m)+b
		);
}

int main(){
	cin>>n>>m>>a>>b;
	memset(memo,-1,sizeof memo);
	int ans=solve(n);
	cout<<ans<<endl;
}