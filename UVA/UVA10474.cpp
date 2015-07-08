#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


int binary_search(int* marbles, int low, int high, int query){
	while(low<=high){
		int mid= low+(high-low)/2;
		if(query==marbles[mid])
			return mid;
		if(query>marbles[mid])
			low=mid+1;
		else 
			high=mid-1;
	}
	return -1;
}

int first_occurrence(int* marbles, int low, int high, int query){
	int n=binary_search(marbles,low,high,query);
	int idx=n;
	if(idx==0 || idx==-1) return n;
	while(query==marbles[idx]){
		idx--;
	}
	return idx+1;
}

int main(){
	int n,q;
	int cs=1;
	while(cin>>n>>q){
		if(n==0 && q==0)break;
		int marbles[n];
		int queries[q];
		for(int i=0;i<n;i++)
			cin>>marbles[i];
		for(int i=0;i<q;i++)
			cin>>queries[i];

		sort(marbles,marbles+n);
		int res[q];
		for(int i=0;i<q;i++){
			res[i]=first_occurrence(marbles,0,n-1,queries[i])+1;
		}

		printf("CASE# %d:\n",cs);
		for(int i=0;i<q;i++){
			if(res[i]!=0)printf("%d found at %d\n",queries[i],res[i]);
			else printf("%d not found\n",queries[i]);
		}
		cs++;
	}
}