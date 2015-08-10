#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int coins[5]={1,5,10,25,50};
int ans[7500]={0};

void precompute(){
	int dp[6][7505];
	for(int i=0;i<=5;i++){
		for(int j=0;j<=7500;j++){
			if(j==0)dp[i][j]=1;
			else dp[i][j]=0;
		}
	}

	for(int i=1;i<=5;i++){
		for(int j=1;j<=7500;j++){
			if(j>=coins[i-1]){
				dp[i][j]=std::max(dp[i-1][j],dp[i-1][j]+dp[i][j-coins[i-1]]);
				ans[j]=dp[i][j];
			}
			else {
				dp[i][j]=dp[i-1][j];
				ans[j]=dp[i][j];
			}
		}
	}
}

int main(){
	int cents;
	precompute();
	while(cin>>cents){
		cout<<ans[cents]<<endl;
	}
}