#include <iostream>
#include <cstdio>
using namespace std;

//DONE USING MODULAR EXPONENTIATION.
int exponentiate(int base,int exponent){
	if(base==0 && exponent==0) return 1;
	else if(base!=0 && exponent==0) return 1;
	else if(base==0) return 0;
	else if(exponent==1) return base;
	else{
		int res=1;
		while(exponent>0){
			if(exponent%2==1){
				res=(res*base)%10;
				exponent--;
			}
			base=(base*base)%10;
			exponent/=2;
		}
		return res;
	}
	return 0;
}


int main(){
	int cases; cin>>cases;
	while(cases--){
		int base,exponent;
		cin>>base>>exponent;
		printf("%d\n",exponentiate(base,exponent));
	}
}