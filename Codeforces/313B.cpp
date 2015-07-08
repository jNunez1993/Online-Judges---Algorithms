#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	string s; int m;
	cin>>s>>m;
	vector<pair<int,int> > query;
	int a,b;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		query.push_back(make_pair(a,b));
	}
	int dp[s.length()+1];
	dp[0]=0;
	for(int i=1;i<=s.length();i++){
		if(s[i-1]==s[i])
			dp[i]=dp[i-1]+1;
		else dp[i]=dp[i-1];
	}
	

	for(int i=0;i<m;i++){
		int left=query[i].first;
		int right=query[i].second;
		cout<<dp[right-1]-dp[left-1]<<endl;
	}
	return 0;
} 