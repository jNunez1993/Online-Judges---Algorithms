#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

//currently gets TLE

void primeFactors(long long n){
	long long coeff=1;
	long long count=0;
	long long root=1;
	while(n%2==0){
		n=n/2;
		count++;
		if(count==2){
			coeff*=2;
			count=0;
		}
	}
	if(count==1)root*=2;

	for(int i=3;i<=sqrt(n);i+=2){
		count=0;
		while(n%i==0){
			n=n/i;
			count++;
			if(count==2){
				coeff*=i;
				count=0;
			}
		}
		if(count==1)root*=i;
	}
	if(n>2){
		if(root%n==0){
			coeff*=n;
			root/=n;
		}
		else
			root*=n;
	}

	printf("%llu %llu\n",coeff,root);
}

int main(){
	long long n;
	while(scanf("%llu",&n)){
		if(n==-1)break;
		primeFactors(n);
	}
	return 0;
}


