#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int n,x;
		cin>>n>>x;
		int num;
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>num;
			s.insert(num);
		}
		if(s.size()==x)cout<<"Perfect husband"<<endl;
		else if(s.size()>x)cout<<"Lame husband"<<endl;
		else cout<<"Bad husband"<<endl;

	}
}