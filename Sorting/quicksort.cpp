#include <bits/stdc++.h>
using namespace std;


void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int *a,int l,int r){
	int right=a[r];
	int idx=l-1;

	for(int i=l;i<=r-1;i++){
		if(a[i]<=right){
			idx++;
			swap(&a[idx],&a[i]);
		}
	}
	printf("idx:%d,a[idx+1]:%d\n",idx,a[idx+1]);
	swap(&a[idx+1],&a[r]);
	return idx+1;
}



void quicksort(int *a,int l,int r){
	if(l<r){
		int p=partition(a,l,r);
		quicksort(a,l,p-1); //sort left
		quicksort(a,p+1,r); //sort right
	}
}


int main(){
	int a[]={1,0,3,2};
	quicksort(a,0,4);
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		cout<<a[i]<<endl;
	}
}