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

//http://en.wikipedia.org/wiki/Triangular_number



void solve(int n){
	int i=0;
	int sum=0;
	for(i=1;;i++){
		sum+=i;
		if(sum>=n) break;
	}
	 int t=n-(sum-i);
     int d=i+1;
     if(i%2==0)
        printf("TERM %d IS %d/%d\n",n,t,d-t);
     else
        printf("TERM %d IS %d/%d\n",n,d-t,t);
    }

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int n;
		cin>>n;
		solve(n);
	}
	return 0;
}