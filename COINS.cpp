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
map<int, long long> dp;


long long max(long long i, long long j){
	return i>j? i:j;
}

long long memo(int n){
	if(n==0) return 0;
	if(dp.count(n)){
		return dp[n];
	} 
	dp[n]=max(n,memo(n/2)+memo(n/3)+memo(n/4));
	return dp[n];
}


int main(){
	int num;
	while(cin>>num){
		cout<<memo(num)<<endl;
	}
}