#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int n,k;
int a[150005];

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	int dp[n+1]={0};
	dp[1]=a[1];
	for(int i=2;i<=k;i++){
		dp[i]+=a[i]+dp[i-1];
	}
	int min=dp[k];
	int idx=1;
	for(int i=k+1;i<=n;i++){
		dp[i]=dp[i-1]-a[i-k]+a[i];
		if(dp[i]<min){
			idx=i-k+1;
			min=dp[i];
		}
	}
	cout<<idx<<endl;

}