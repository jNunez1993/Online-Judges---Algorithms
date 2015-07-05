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

int solve(int first, int second){
	if(first==second){
		if(first%2==0)
			return first*2;
		else 
			return first*2-1;
	}
	else if(first-second==2){
		int val=first-1;
		if(val%2==1)
			val*=2;
		else 
			val=val*2-1;
		return val;
	}
	else{
		return 0;
	}
}


int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int first,second;
		cin>>first>>second;
		if(first==0 && second==0){
			cout<<"0"<<endl;
		}
		else{
			int res=solve(first,second);
			if(res==0)
				cout<<"No Number"<<endl;
			else
				cout<<res<<endl;
			
		}
	}
}