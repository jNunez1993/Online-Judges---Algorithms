#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int n,k;
		cin>>n>>k;
		string names[n];
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>names[i];
			m[names[i].length()]++;
		}
		bool isPossible=true;
		for(int i=0;i<n;i++){
			if(m[names[i].length()]%k!=0)
				isPossible=false;
		}

		if(isPossible)cout<<"Possible"<<endl;
		else cout<<"Not possible"<<endl;
	}
}