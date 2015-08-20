#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1000000000
#define MOD 1000000007
using namespace std;
//n=total weight
//k=k-tree
//d at least weight d
//states=(sum until now, edge of at least length d taken)
int n,k,d;
int memo[105][3];


int solve(int sum,int taken){
	if(sum>n)
		return 0;
	if(sum==n && taken==1)
		return 1;
	if(sum==n && taken==0)
		return 0;
	if(memo[sum][taken]!=-1)return memo[sum][taken];
	long long ans=0;
	for(int i=1;i<=k;i++){
		if(i>=d || taken)
			ans+=solve(sum+i,1);
		else
			ans+=solve(sum+i,0);
	}
	return memo[sum][taken]=ans%MOD;
}

int main(){
	memset(memo,-1,sizeof memo);
	cin>>n>>k>>d;
	int ans=solve(0,0);
	cout<<ans<<endl;
}