#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;

int main(){
	int n,m;
	cin>>n;
	int a[n+1];
	long long pre1[n+1];
	long long pre2[n+1];
	pre1[0]=0;
	pre2[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre1[i]=pre1[i-1]+a[i];
	}
	std::sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		pre2[i]=pre2[i-1]+a[i];
	}
	cin>>m;
	int type[m];
	int l[m];
	int r[m];
	for(int i=0;i<m;i++){
		cin>>type[i]>>l[i]>>r[i];
	}
	for(int i=0;i<m;i++){
		if(type[i]==1)
			cout<<pre1[r[i]]-pre1[l[i]-1]<<endl;
		else
			cout<<pre2[r[i]]-pre2[l[i]-1]<<endl;
	}
}