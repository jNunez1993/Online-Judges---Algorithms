#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		set<int> cd;
		if(n==0 && m==0)break;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			cd.insert(x);
		}
		int same=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(cd.count(x)==1)same++;
	
		}
		cout<<same<<endl;
	}
}