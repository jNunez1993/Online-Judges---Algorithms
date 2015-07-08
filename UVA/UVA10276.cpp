#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int peg[55];
int ans;
int n;


void solve(int x,int p){
	if(p==n) return;
	if(peg[p]==0){
		peg[p]=x;
		ans++;
		return solve(x+1,p);
	}

	for(int i=0;i<=p;i++){
		if(sqrt((double)peg[i]+x)==ceil(sqrt((double)peg[i]+x))){
			peg[i]=x;
			ans++;
			return solve(x+1,p);
		}
	}
	return solve(x,p+1);
}


int main(){
	int cases;
	cin>>cases;
	while(cases--){
		memset(peg,0,sizeof peg);
		ans=0;
		cin>>n;
		solve(1,0);
		cout<<ans<<endl;
	}
}