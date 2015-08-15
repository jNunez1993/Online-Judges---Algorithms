#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;

int main(){
	int n,m,a;
	cin>>n>>m;
	int middle= n/2;
	if(n==1)a=1;
	else if(m>middle)a=m-1;
	else if(m<middle)a=m+1;
	else{
		a=m+1;
	}
	cout<<a<<endl;
}