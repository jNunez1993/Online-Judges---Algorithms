#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
	int cases;
	cin>>cases;
	while(cases--){
		int h,w;
		cin>>h>>w;
		int grid[h][w];
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>grid[i][j];
			}
		}
		int dp[h+2][w+2];
		for(int i=0;i<=h+1;i++){
			for(int j=0;j<=w+1;j++){
				dp[i][j]=0;
			}
		}
		int max=0;
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				dp[i][j]=grid[i-1][j-1]+std::max(dp[i-1][j],std::max(dp[i-1][j-1],dp[i-1][j+1]));
				if(dp[i][j]>max)max=dp[i][j];
			}
		}
		cout<<max<<endl;
	}
}