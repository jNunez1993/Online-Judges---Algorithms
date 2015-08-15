#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,t;
int memo[7][1005];
vector<pair<int,int> > v[7];


int solve(int item,int money){
	if(money<0)return 0;
	if(item>6)return 1e9;
	if(memo[item][money]!=-1)return memo[item][money];
	int ans=0;
	for(int i=0;i<v[item].size();i++){
		if(money>=v[item][i].first)
			ans=std::max(ans,std::min(v[item][i].second,solve(item+1,money-v[item][i].first)));
	}
	return memo[item][money]=ans;
}


int main(){
	cin>>n>>t;
	memset(memo,-1,sizeof memo);
	int type,p,q;
	for(int i=0;i<n;i++){
		cin>>type>>p>>q;
		v[type].push_back(make_pair(p,q));
	}

	int ans=solve(1,t);
	cout<<ans<<endl;
	


}