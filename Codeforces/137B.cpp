#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	std::sort(a,a+n);
	int i=0;int j=0;
	int cnt=0;
	while(i<n){
		int t=-1;
		if(a[i]>n){
			j++;
			t=1;
		}
		else{
			while(j<n && a[i]==a[j]){
				t++;
				j++;
			}
		}
		cnt+=t;
		i=j;
	}
	cout<<cnt<<endl;
}