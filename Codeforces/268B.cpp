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
	int n;
	cin>>n;
	if(n==0){
		cout<<0<<endl;
		return 0;
	}
	int dp[n+1];
	dp[0]=0;
	dp[1]=1;
	int res=1;
	int i=1;
	int k=2;
	n--;
	while(n--){
		dp[k]=dp[k-1]+i;
		res+=dp[k];
		i++;
		k++;
	}
	cout<<res<<endl;

}