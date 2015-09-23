#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;


int main(){
	int na,nb,k,m;
	cin>>na>>nb>>k>>m;
	int a[na],b[nb];
	for(int i=0;i<na;i++)cin>>a[i];
	for(int i=0;i<nb;i++)cin>>b[i];

	if(a[k-1]<b[nb-m])printf("YES\n");
	else printf("NO\n");
	return 0;
}