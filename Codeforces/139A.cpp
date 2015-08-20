#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int a[8];
int n;


int main(){
	cin>>n;
	for(int i=1;i<=7;i++){
		cin>>a[i];
	}
	bool done=false;
	int read=0;
	int idx=1;
	while(!done){
		if(idx==8)idx=1;
		if(read+a[idx]>=n){
			cout<<idx<<endl;
			break;
		}
		read+=a[idx];
		idx++;
	}
}