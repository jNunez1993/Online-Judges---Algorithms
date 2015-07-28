#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int b,p;
	while(cin>>b>>p){
		if(b==0 && p==0)break;
		int budget[p];
		int fun[p];
		for(int i=0;i<p;i++){
			cin>>budget[i]>>fun[i];
		}

		int dp[p+1][b+1];
		for(int i=0;i<=p;i++)
			for(int j=0;j<=b;j++)
				dp[i][j]=0;

		for(int i=1;i<=p;i++){
			for(int j=1;j<=b;j++){
				if(budget[i-1]<=j){
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-budget[i-1]]+fun[i-1]);
				}
				else{
					dp[i][j]=dp[i-1][j];
				}
			}
		}
		int minCost=0;
		int val=dp[p][b];
		while(dp[p][b-1]==val){
			b--;
		}
		cout<<b<<" "<<val<<endl;
		
	}
}