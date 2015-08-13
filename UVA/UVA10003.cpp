#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int l,n;
int a[52];
int memo[52][52];

int solve(int left,int right){
	if(memo[left][right]!=-1)return memo[left][right];
	if(right-left==1)return 0;
	int cost=1e9;
	for(int i=left+1;i<right;i++){
		cost=std::min(cost,solve(left,i)+solve(i,right)+(a[right]-a[left]));
	}
	return memo[left][right]=cost;
	
}

int main(){
	while(cin>>l){
		if(l==0)break;
		cin>>n;
		memset(memo,-1,sizeof memo);
		for(int i=1;i<=n;i++)cin>>a[i];
		a[0]=0;
		a[n+1]=l;
		int ans=solve(0,n+1);
		printf("The minimum cutting is %d.\n",ans);
	}
}