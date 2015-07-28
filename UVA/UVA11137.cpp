#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int coins[22];


long long cube(int n){
	return n*n*n;
}

void precalc(){
	for(int i=1;i<=21;i++){
		coins[i]=cube(i);
	}
}


long long solve(int n){
	long long dp[n+1];
	for(int i=0;i<=n;i++){
		dp[i]=0;
	}
	dp[0]=1;
	for(int i=1;i<=21;i++){
		int val=coins[i];
		for(int j=1;j<=n;j++){
			if(val<=j)dp[j]+=dp[j-val];
		}
	}
	return dp[n];
}

int main(){
	int n;
	precalc();
	while(cin>>n){
		cout<<solve(n)<<endl;
	}
	
}