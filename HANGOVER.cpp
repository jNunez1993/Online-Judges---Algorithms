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


int main(){
	double n;
	while(cin>>n){
		if(n==0.00) break;
		bool found=false;
		int i=2;
		double sum=0;
		int res;
		while(!found){
			sum+=(1.00/i);
			i++;
			if(sum>=n){
				res=i-2;
				found=true;
			}

		}
		printf("%d card(s)\n",res);
	}
}