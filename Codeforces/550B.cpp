#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int n,l,r,x;
int a[17];
int cnt=0;

void solve(int idx,int total,int minDiff,int maxDiff){
	if(idx==n){
		if(total==0)return;

		if(total>=l && total<=r && maxDiff-minDiff>=x)
			cnt++;
		return;
	}

	solve(idx+1,total+a[idx],std::min(minDiff,a[idx]),std::max(maxDiff,a[idx]));
	solve(idx+1,total,minDiff,maxDiff);

}

int main(){
	cin>>n>>l>>r>>x;
	for(int i=0;i<n;i++)cin>>a[i];

	solve(0,0,INF,0);
	cout<<cnt<<endl;

}