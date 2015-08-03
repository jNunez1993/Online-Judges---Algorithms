#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int n,a,b,c;
	cin>>n;
	set<int> s;
	int x;
	for(int i=0;i<3;i++){	//remove dups
		cin>>x;
		s.insert(x);
	}


	int dp[n+1]={0};
	dp[0]=1;
	for(std::set<int>::iterator it=s.begin();it!=s.end();it++){
		for(int j=*it;j<=n;j++){
			if(dp[j-*it]>0){
				dp[j]=std::max(dp[j],dp[j-*it]+1);
			}
		}
	}
	cout<<dp[n]-1<<endl;
}