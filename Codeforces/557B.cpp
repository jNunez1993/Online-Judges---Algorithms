#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int n,w;
	cin>>n>>w;
	int a[2*n];
	for(int i=0;i<2*n;i++){
		cin>>a[i];
	}
	sort(a,a+2*n);
	double gmin=a[0];
	double bmin=a[n];
	double ans=0;
	if(bmin/2>=gmin)ans+=(gmin*n+gmin*2*n);
	else ans+=(n*bmin/2 + n*bmin);
	if(ans>w) cout<<w<<endl;
	else printf("%f",ans);
}