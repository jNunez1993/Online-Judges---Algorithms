#include <bits/stdc++.h>



int binary_search_recursive(int* arr,int begin,int end, int query){
	int mid=begin+(end-begin)/2;

	if(begin==end) return -1;

	else if(query==arr[mid]){
		return mid;
	}
	else if(query > arr[mid]){
		return binary_search_recursive(arr,mid+1,end,query);
	}
	else if(query < arr[mid]){
		return binary_search_recursive(arr,begin,mid-1,query);
	}
	
}


int binary_search_iterative(int* arr, int low, int high, int query){
	while(low<=high){
		int mid= low+(high-low)/2;
		if(query==arr[mid])
			return mid;
		if(query>arr[mid])
			low=mid+1;
		else 
			high=mid-1;
	}
	return -1;
}


int main(){

}