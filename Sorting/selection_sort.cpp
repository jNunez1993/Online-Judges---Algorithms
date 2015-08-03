#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

template <typename T>
void selection_sort(T *a, int n){
	for(int i=0;i<n;i++){
		int pos=0;
		for(int j=1;j<n-i;j++){
			if(a[j]>a[pos]){
				pos=j;
			}
		}
		std::swap(a[n-i-1],a[pos]);
	}

}

int main(){
	int a[]={6,7,5,4,11,54,5,6,34,65,123,43,56,76};
	selection_sort(a,sizeof(a)/sizeof(a[0]));
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		cout<<a[i]<<endl;
	}
}