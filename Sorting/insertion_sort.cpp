#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

template <typename T>
void insertion_sort(T *a,int n){
	for(int i=0;i<n;i++){
		int t=a[i];
		int j=i;
		while(j>0 && t<a[j-1]){
			a[j]=a[j-1];
			j--;
		}
		a[j]=t;
	}
}

int main(){
	int a[]={6,7,5,4};
	insertion_sort(a,sizeof(a)/sizeof(a[0]));
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		cout<<a[i]<<endl;
	}
}