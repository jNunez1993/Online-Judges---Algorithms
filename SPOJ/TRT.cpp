#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int a[2005];
int cache[2005][2005];


int profit(int year,int l,int r){
	if(l>r)return 0;

	if(cache[l][r]!=-1){
		return cache[l][r];
	}

	return cache[l][r]=std::max(
		profit(year+1,l+1,r)+year*a[l],
		profit(year+1,l,r-1)+year*a[r]
	);
}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++)cache[i][j]=-1;
	}
	int ans=profit(1,0,n-1);
	cout<<ans<<endl;
	
}