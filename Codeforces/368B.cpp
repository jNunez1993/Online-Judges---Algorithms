#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int a[100005];
int idx[100005];
int vis[100005]={0};
int n,m;

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>idx[i];
	}

	int dp[n+2];
	dp[n+1]=0;
	for(int i=n;i>=1;i--){
		if(vis[a[i-1]]==0){
			dp[i]=dp[i+1]+1;
			vis[a[i-1]]=1;
		}
		else
			dp[i]=dp[i+1];
	}

	for(int i=0;i<m;i++){
		cout<<dp[idx[i]]<<endl;
	}

}