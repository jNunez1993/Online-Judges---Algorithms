#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int a[103];
int pre[103]={0};

int main(){
	int m,x,y;
	cin>>m;
	int s=0;
	for(int i=1;i<=m;i++){
		cin>>a[i];
		pre[i]=pre[i-1]+a[i];
	}
	cin>>x>>y;

	for(int i=1;i<=m;i++){
		if(pre[i]>=x && pre[i]<=y && pre[m]-pre[i]<=y && pre[m]-pre[i]>=x){
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<0<<endl;

}