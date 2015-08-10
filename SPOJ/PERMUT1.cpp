#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int memo[15][100];

int solve(int n,int k){
	if(n==0)return 0;
	if(k==0)return 1;
	if(memo[n][k]!=-1)return memo[n][k];
	int cnt=0;
	for(int i=0;i<n && k-i>=0;i++){
		cnt+=solve(n-1,k-i);
	}
	return memo[n][k]=cnt;

}

int main(){
	int cases,n,k;
	cin>>cases;
	while(cases--){
		memset(memo,-1,sizeof memo);
		cin>>n>>k;
		int ans=solve(n,k);
		cout<<ans<<endl;
	}
}