#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int m,n;
		cin>>m>>n;
		int boys[m];
		int girls[n];
		for(int i=0;i<m;i++)cin>>boys[i];
		for(int i=0;i<n;i++)cin>>girls[i];
		sort(boys,boys+m);
		sort(girls,girls+n);
		int i=0;
		int j=0;
		while( i<m && j<n){
			if(boys[i]>girls[j]){
				i++;
				j++;
			}
			else{
				j++;
			}
		}
		if(i==m)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}