#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;


int main(){
	int n;
	cin>>n;
	int p[n];
	for(int i=0;i<n;i++)cin>>p[i];

	int taken=0;
	int end=0;
	int ans=0;
	while(taken!=n){
		if(end==0){
			for(int i=0;i<n;i++){
				if(p[i]<=taken){
					taken++;
					p[i]=INF;
				}
			}
			end=1;
			if(taken!=n){
				ans++;
			}
			else break;
		}
		if(end==1){
			for(int i=n-1;i>=0;i--){
				if(p[i]<=taken){
					taken++;
					p[i]=INF;
				}
			}
			end=0;
			if(taken!=n)ans++;
			else break;
		}
	}
	cout<<ans<<endl;
}