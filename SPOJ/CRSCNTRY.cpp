#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int lcs(int *a,int *b,int m,int n){
	int dp[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0)dp[i][j]=0;
			else if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=std::max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[m][n];
}

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int agnes[2005];
		int read;
		int i=0;
		while(cin>>read){
			if(read==0)break;
			agnes[i++]=read;
		}
		int max=0;
		cin>>read;
		while(read!=0){
			int tom[2005];
			tom[0]=read;
			int j=1;
			while(cin>>read){
				if(read==0)break;
				tom[j++]=read;
			}
			max=std::max(max,lcs(agnes,tom,i,j));
			cin>>read;
		}
		cout<<max<<endl;
	}
}