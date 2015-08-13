#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int t,a,n;
int oxygen[1005],nitrogen[1005],weight[1005];
int memo[100][100][1005];



int solve(int co,int cn,int i){
	if(co<=0 && cn<=0)return 0;
	if(i==n)return 1e9;
	if(co<0)co=0;
	if(cn<0)cn=0;
	if(memo[co][cn][i]!=-1)return memo[co][cn][i];
	return memo[co][cn][i]=std::min(solve(co,cn,i+1),weight[i]+solve(co-oxygen[i],cn-nitrogen[i],i+1));
}

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		memset(memo,-1,sizeof memo);
		cin>>t>>a>>n;
		for(int i=0;i<n;i++)
			cin>>oxygen[i]>>nitrogen[i]>>weight[i];

		int ans=solve(t,a,0);
		cout<<ans<<endl;
	}
}