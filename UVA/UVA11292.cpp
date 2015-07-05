#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 9223372036854775807
using namespace std;


int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0) break;
		long long d[n];
		for(int i=0;i<n;i++){
			cin>>d[i];
		}
		long long k[m];
		for(int i=0;i<m;i++){
			cin>>k[i];
		}
		long long coins=0;
		sort(d,d+n);
		sort(k,k+m);
		int i=0;
		int j=0;
		while(j<m && i<n){
			if(k[j]>=d[i]){
				coins+=k[j];
				j++;
				i++;
			}
			else if(k[j]<d[i]){
				j++;
			}
		}
		
		if(i<n)cout<<"Loowater is doomed!"<<endl;
		else cout<<coins<<endl;
	}
}