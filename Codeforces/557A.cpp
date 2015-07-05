#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int n,min1,max1,min2,max2,min3,max3;
	cin>>n>>min1>>max1>>min2>>max2>>min3>>max3;
	while(min1+min2+min3<n){
		if(min1<max1)min1++;
		else if(min2<max2)min2++;
		else min3++;
	}


	printf("%d %d %d\n",min1,min2,min3);
}