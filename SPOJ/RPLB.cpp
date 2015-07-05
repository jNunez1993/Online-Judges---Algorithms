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
	int scen=1;
	while(cases--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int dp[n+1][k+1];
		int taken[n+1][k+1];
		for(int i=0;i<=n;i++){
			for(int j=0;j<=k;j++){
				dp[i][j]=0;
				taken[i][j]=0;
			}
		}

		for(int i=1;i<=n;i++){
			for(int j=1;j<=k;j++){
				if(j>=a[i-1]){
					if(dp[i-1][j-a[i-1]]+a[i-1]<=k && taken[i-1][j-a[i-1]]!=1){
						dp[i][j]=max(dp[i-1][j-a[i-1]]+a[i-1],max(dp[i-1][j],dp[i][j-1]));
						if(dp[i][j]==dp[i-1][j-a[i-1]]+a[i-1]) taken[i][j]=1;
						else taken[i][j]=0;
					}
					else{
						dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
						if(dp[i][j]==dp[i][j-1])
							taken[i][j]=1;
						else taken[i][j]=0;
					}
				}
				else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
					if(dp[i][j]==dp[i][j-1])
						taken[i][j]=1;
					else taken[i][j]=0;
				}

			}
		}

		printf("Scenario #%d: %d\n",scen,dp[n][k]);

		scen++;

	}
}