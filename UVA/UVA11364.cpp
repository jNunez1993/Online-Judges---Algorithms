#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <limits>
using namespace std;




int main(){
	int test,stores;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>stores;
		int max=0;
		int min=numeric_limits<int>::max();
		int *s= new int[stores];
		for(int i=0;i<stores;i++){
			cin>>s[i];
			if(s[i]>max) max=s[i];
			if(s[i]<min) min=s[i];
		}
		printf("%d\n",(max-min)*2);
		
	}
}