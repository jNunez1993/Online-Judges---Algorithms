#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

void merge(int *a,int start,int mid,int end){
	int l=start;	//left index of array
	int r=mid+1;	//one passed middle index of array;
	int arr[end-start+1];	//size of aux array;
	int k=0;				//pointer to beginning of aux arr
	for(int i=start;i<=end;i++){
		if(l>mid)			//if left index > mid, then just copy over the right elements
			arr[k++]=a[r++];
		else if(r>end)		//if right index > end, then just copy over left elements
			arr[k++]=a[l++];
		else if(a[l]<a[r])	//if a[left]<a[right], then copy left into aux array at kth index
			arr[k++]=a[l++];
		else				//else copy a[right] into kth index
			arr[k++]=a[r++];
	}
	for(int i=0;i<k;i++){	//copy over correctly sorted elements into the original array
		a[start++]=arr[i];
	}
}


void merge_sort(int *a, int start,int end){
	if(start<end){
		int mid=start+(end-start)/2;	//get mid index
		merge_sort(a,start,mid);		//merge_sort from left to mid
		merge_sort(a,mid+1,end);		//merge_sort from mid+1 to end
		merge(a,start,mid,end);			//merge the elements in the sorted order
	}
}


int main(){
	int a[]={6,7,5,4,11,54,5,6,34,65,123,43,56,76};
	merge_sort(a,0,sizeof(a)/sizeof(a[0])-1);
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		cout<<a[i]<<endl;
	}
}