#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1000000000
using namespace std;



int main(){
	int n;
	cin>>n;
	int k=1e7-n;
	for(int i=0;i<n;i++){
		cout<<k++<<" ";
	}
}