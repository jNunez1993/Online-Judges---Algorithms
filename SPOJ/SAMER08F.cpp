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

int solve(int num){
	int dp[num+1];
	dp[0]=0;
	for(int i=1;i<=num;i++){
		dp[i]=pow(i,2)+dp[i-1];
	}
	return dp[num];
}


int main(){
	int num;
	while(cin>>num){
		if(num==0) break;
		cout<<solve(num)<<endl;
	}
}