#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#include <limits>
#include <iterator>
using namespace std;
long long cnt=0;

void merge(int *a,int *l,int *r,int leftSize,int rightSize){
	int i,j,k;
	i=0;
	j=0;
	k=0;
	while(i<leftSize && j<rightSize){
		if(l[i]<r[j]){
			a[k++]=l[i++];
		}
		else{
			cnt+=(leftSize-i);
			a[k++]=r[j++];
		}
	}

	while(i<leftSize) {
		a[k++]=l[i++];
	}

	while(j<rightSize){
		a[k++]=r[j++];
	}
}



void merge_sort(int *a,int size){
	if(size<=1) return;
	int mid=size/2;
	int *l=new int[mid];
	int *r=new int[size-mid];

	for(int i=0;i<mid;i++){
		l[i]=a[i];
	}

	for(int i=mid;i<size;i++){
		r[i-mid]=a[i];
	}
	merge_sort(l,mid);
	merge_sort(r,size-mid);
	merge(a,l,r,mid,size-mid);
}




int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		merge_sort(a,n);
		cout<<cnt<<endl;
		cnt=0;
	}
}