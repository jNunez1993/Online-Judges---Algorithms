#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;


int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cnt=1;
	int ans=1;
	for(int i=1;i<n;i++){
		if(a[i]>=a[i-1])cnt++;
		else cnt=1;
		ans=std::max(ans,cnt);
	}
	cout<<ans<<endl;
}