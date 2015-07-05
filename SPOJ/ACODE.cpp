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

int toNum(string s){
	int n;
	istringstream (s) >> n;
	return n;
}

long long solve(string s){
	long long dp[5010];
	for(int i=0;i<=s.length();i++){
		dp[i]=0;
	}
	dp[0]=1;

	for(int i=1;i<=s.length();i++){
		int sing=toNum(string() + s[i]);
		int dub= toNum(string() + s[i-1]+s[i]);

			if(sing>0 && sing<10)
				dp[i]=dp[i-1];
			
			if(dub>9 && dub<=26 ) {
				dp[i]+=dp[i-2<0? 0:i-2];
			}
	
	}
	long long val=dp[s.length()-1];
	return val;
}


int main(){
	string s;
	while(cin>>s){
		if(s=="0") break;
		cout<<solve(s)<<endl;
	}
}