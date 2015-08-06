#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[n];
	int min=INF;
	for(int i=0;i<n;i++){
		cin>>a[i];
		min=std::min(a[i],min);
	}
	min=abs(min);
	for(int i=0;i<n;i++){
		a[i]+=min;
	}

	for(int i=0;i<n;i++){
		if(i==0){
			cout<<a[i+1]-a[i]<<" ";
			cout<<a[n-1]-a[i]<<endl;
		}
		else if(i==n-1){
			cout<<a[i]-a[i-1]<<" ";
			cout<<a[i]-a[0]<<endl;
		}
		else{
			min=std::min(a[i]-a[i-1],a[i+1]-a[i]);
			int max=std::max(a[i]-a[0],a[n-1]-a[i]);
			cout<<min<<" ";
			cout<<max<<endl;
		}
	}

}