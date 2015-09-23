#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int a[105];


int main(){
	int n;
	cin>>n;
	int max=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int taken=0;
	bool ran=false;
	sort(a+1,a+n);
	while(true){
		int max=a[n-1];
		for(int i=n-1;i>=1;i--){
			if(a[0]<=a[i] && a[i]==max){
				a[i]--;
				taken++;
				a[0]++;
				ran=true;
			}
		}
		if(!ran)break;
		sort(a+1,a+n);
		ran=false;
	}
	cout<<taken<<endl;
	
}
