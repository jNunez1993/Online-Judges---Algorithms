#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int k,l,m;
int pos[1000009];




int main(){
	memset(pos,0,sizeof pos);
	cin>>k>>l>>m;
	int a[m];
	for(int i=0;i<m;i++)cin>>a[i];

	pos[0]=0;	
	for(int i=1;i<=1000000;i++){
		if(pos[i-1]==0)
			pos[i]=1;
		else if(i-k>=0 && pos[i-k]==0)
			pos[i]=1;
		else if(i-l>=0 && pos[i-l]==0)
			pos[i]=1;
	}
	for(int i=0;i<m;i++){
		if(pos[a[i]]==1)cout<<"A";
		else if(pos[a[i]]==0) cout<<"B";
	}
	cout<<endl;
}