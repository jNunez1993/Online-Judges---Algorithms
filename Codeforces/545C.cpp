#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
int n;
int x[100005];
int h[100005];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i]>>h[i];
	}
	x[n]=INF;
	int fell=(-1)*INF;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(x[i]-h[i]>fell){
			fell=x[i];
			cnt++;
		}
		else if(x[i]+h[i]<x[i+1]){
			fell=x[i]+h[i];
			cnt++;
		}
		else{
			fell=x[i];
		}
	}
	cout<<cnt<<endl;
}