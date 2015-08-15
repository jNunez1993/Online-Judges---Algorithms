#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1000000000
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool done=false;
	bool ran=false;
	while(!done){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j && a[i]>a[j]){
					a[i]-=a[j];
					ran=true;
				}
			}
		}
		if(!ran){
			done=true;
			break;
		}
		ran=false;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<sum<<endl;
}