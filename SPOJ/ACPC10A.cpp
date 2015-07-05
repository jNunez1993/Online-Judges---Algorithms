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


int* solve(int first,int second,int third){
	int *res=new int[2];
	if(third-second==second-first){
		int val=third-second;
		int nextVal=third+val;
		res[0]=0;
		res[1]=nextVal;
	}
	else if(third/second==second/first){
		int val=third/second;
		int nextVal=third*val;
		res[0]=1;
		res[1]=nextVal;
	}

	return res;
}


int main(){
	int first,second,third;
	while(cin>>first>>second>>third){
		if(first==0 && second==0 && third==0) break;

		int *res=solve(first,second,third);
		if(res[0]==0){
			printf("%s %d\n","AP",res[1]);
		}
		else{
			printf("%s %d\n","GP",res[1]);
		}

	}
}