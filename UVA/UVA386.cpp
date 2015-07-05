#include <cstring>
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
using namespace std;

const int s=200;


bool exp(int a,int b,int c,int d){
	if(a==(pow(b,3)+pow(c,3)+pow(d,3))){
		return true;
	}
	return false;
}



int main(){
	int a,b,c,d;
	for(int i=6;i<=200;i++){
		a=i*i*i;
		for(int j=2;j<i;j++){
			b=j*j*j;
			for(int k=j;k<i;k++){
				c=k*k*k;
				for(int n=k;n<i;n++){
					d=n*n*n;
					if(a==(b+c+d)){
						printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,n);
					}
				}
			}
		}
	}
}

