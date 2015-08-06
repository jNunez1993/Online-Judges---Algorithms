#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


int main(){
	int n,t;
	while(cin>>n){
		cin>>t;
		int a[t];
		for(int i=0;i<t;i++)cin>>a[i];

		int dp[t+1][n+1];
		for(int i=0;i<=t;i++)
			for(int j=0;j<=n;j++)
				dp[i][j]=0;

		for(int i=1;i<=t;i++){
			for(int j=1;j<=n;j++){
				if(j>=a[i-1] && dp[i][j-a[i-1]]+a[i-1]<=n)
					dp[i][j]=std::max(dp[i-1][j-a[i-1]]+a[i-1],dp[i-1][j]);
				else dp[i][j]=dp[i-1][j];
			}
		}

		//get picked elements
		int i=t;
		int j=n;
		stack<int> s;
		while(i>0){
			if(dp[i][j]-dp[i-1][j-a[i-1]]==a[i-1]){
				s.push(a[i-1]);
				j-=a[i-1];
				i--;
			}
			else{
				i--;
			}
		}
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop();
		}

		cout<<"sum:"<<dp[t][n]<<endl;
	}
}