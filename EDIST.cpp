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
int dp[3005][3005]={0};

/*
if a[i]==b[j] then you take dp[i-1][j-1] because the current letter
does not impact the conditions.
If not, then you want to take the min of (dp[i-1][j-1] and min
of(dp[i][j-1]+1) and dp[i-1][j]+1).

*/

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		string a,b;
		cin>>a>>b;
		for(int i=0;i<=a.length();i++){
			dp[i][0]=i;
		}
		for(int i=0;i<=b.length();i++){
			dp[0][i]=i;
		}



		for(int i=1;i<=a.length();i++){
			for(int j=1;j<=b.length();j++){
				if(a[i-1]==b[j-1]){
					dp[i][j]=dp[i-1][j-1];
				}
				else{
					dp[i][j]=min(dp[i-1][j-1]+1,min(dp[i-1][j]+1,dp[i][j-1]+1));
				}
			}
		}
		cout<<dp[a.length()][b.length()]<<endl;
	}
}