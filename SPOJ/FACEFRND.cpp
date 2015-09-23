#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
set<int> sset;



int main(){
	int n,m,bf,bff;
	cin>>n;
	int f=n;
	while(n--){
		cin>>bf>>m;
		sset.insert(bf);
		while(m--){
			cin>>bff;
			sset.insert(bff);
		}
	}
	cout<<sset.size()-f<<endl;
}