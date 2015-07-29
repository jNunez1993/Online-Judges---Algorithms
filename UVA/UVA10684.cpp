#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0)break;
		int x;
		int sum=0;
		int ans=0;
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			sum+=x;
			ans=std::max(ans,sum);
			if(sum<0)sum=0;
		}
		if(ans>0)printf("The maximum winning streak is %d.\n",ans);
		else printf("Losing streak.\n");

	}
}