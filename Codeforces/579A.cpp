#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;


int main(){
	int n;
	cin>>n;
	int cnt=0;
	while(n!=0){
		if(n%2==1)cnt++;
		n/=2;
	}
	cout<<cnt<<endl;
}