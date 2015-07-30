#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


int main(){
	int cases;
	cin>>cases;
	while(cases--){
		string s;
		cin>>s;
		long long dp[s.length()];
		if(s[0]=='Z')dp[0]=1;
		else dp[0]=0;

		long long sum=0;
		for(int i=1;i<s.length();i++){
			if(s[i]=='Z'){
				dp[i]=dp[i-1]+1;
			}
			else if(s[i]=='O'){
				dp[i]=dp[i-1];
				sum+=dp[i];
			}
		}

		fill(dp,dp+s.length(),0);
		long long sumr=0;

		if(s[0]=='O')dp[0]=1;
		else dp[0]=0;

		for(int i=1;i<s.length();i++){
			if(s[i]=='O'){
				dp[i]=dp[i-1]+1;
			}
			else if(s[i]=='Z'){
				dp[i]=dp[i-1];
				sumr+=dp[i];
			}
		}


		cout<<std::min(sum,sumr)<<endl;

	}
}