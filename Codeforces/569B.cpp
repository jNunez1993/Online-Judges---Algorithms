#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
map<int,int> m;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}

	vector<int> unused;
	for(int i=1;i<=n;i++){
		if(m[i]==0)unused.push_back(i);
	}

	int idx=0;

	for(int i=0;i<n;i++){
		if(m[a[i]]>1){
			m[a[i]]--;
			a[i]=unused[idx];
			idx++;
		}
	}

	for(int i=0;i<n;i++){
		if(a[i]>n){
			a[i]=unused[idx];
			idx++;
		}
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

}