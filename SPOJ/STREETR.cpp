#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n;
int a[100005];
int diff[100005];
int cnt=0;

bool canWork(int k){
	cnt=0;
	for(int i=1;i<n;i++){
		if(diff[i]%k!=0)return false;
		cnt+=((diff[i]/k)-1);
	}
	return true;
}

int main(){
	cin>>n;
	int x;
	for(int i=0;i<n;i++) cin>>a[i];
		
	int minAdj=1e9;
	for(int i=1;i<n;i++){
		diff[i]=a[i]-a[i-1];
		minAdj=std::min(minAdj,diff[i]);
	}

	int low=1;
	int high=minAdj;
	int ans=1e9;
	while(high>=low){
		bool ret=canWork(high--);
		if(ret)
			ans=std::min(ans,cnt);
	}
	cout<<ans<<endl;
}