#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n;
int x[1000];
int y[1000];
//check these values later
double memo[1<<16];

double dist(int c1,int c2){
	return sqrt(pow(x[c1]-x[c2],2)+pow(y[c1]-y[c2],2));
}

double solve(int bitmask){
	if(bitmask==(1<<n)-1)return 0;
	if(memo[bitmask]!=0)return memo[bitmask];
	double ans=INF;
	int c1=0;
	int c2=0;
	while(c1<n && ((1 & (bitmask>>c1))!=0))c1++;

	for(c2=c1+1;c2<n;c2++){
		if((1 & (bitmask>>c2))==0){
			ans=std::min(ans,dist(c1,c2)+solve(bitmask | 1<<c1 | 1<<c2));
		}
	}
	return memo[bitmask]=ans;

}



int main(){
	//assert(freopen("f.in","r",stdin));
	//assert(freopen("f.out","w",stdout));
	string name;
	int x1,y1;
	int T=1;
	while(cin>>n){
		if(n==0)break;
		memset(memo,0,sizeof memo);
		n*=2;
		for(int i=0;i<n;i++){
			cin>>name>>x1>>y1;
			x[i]=x1;
			y[i]=y1;
		}
		
		double ans=solve(0);
		printf("Case %d: %.2f\n",T++,ans);
		
	}

}