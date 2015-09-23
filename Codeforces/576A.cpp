#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,x;



int main(){
	cin>>n>>x;
	int times=0;
	for(int i=1;i<=n;i++){
		if(x%i==0 && x/i<=n){
			times++;
		}
	}
	cout<<times<<endl;
}