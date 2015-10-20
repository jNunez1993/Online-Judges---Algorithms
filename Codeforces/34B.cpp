#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;


int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	sort(a,a+n);
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]<0 && i<m)sum+=(-a[i]);
	}
	cout<<sum<<endl;
}