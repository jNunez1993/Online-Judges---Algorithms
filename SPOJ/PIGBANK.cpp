#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int e,f;
		cin>>e>>f;
		int n;
		cin>>n;
		int v[n];
		int w[n];
		for(int i=0;i<n;i++)cin>>v[i]>>w[i];

		int dp[f-e+1];
		for(int i=0;i<=f-e;i++)
				dp[i]=INF;
		dp[0]=0;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=f-e;j++){
				if(w[i-1]<=j && dp[j-w[i-1]]!=INF)
					dp[j]=min(dp[j-w[i-1]]+v[i-1],dp[j]);
			}
		}
		
		if(dp[f-e]==INF)cout<<"This is impossible."<<endl;
		else printf("The minimum amount of money in the piggy-bank is %d.\n",dp[f-e]);
		
	}
}