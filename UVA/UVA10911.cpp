#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;


int x[10];
int y[10];
int N;
double memo[1<<16];


double dist(int i,int j){
	return sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
}

double solve(int bitmask){
	if(bitmask>=(pow(2,2*N)-1)){
		return 0;
	}
	if(memo[bitmask]!=0)return memo[bitmask];
	double minDist=INF;
	int i=0;
	int j=0;
	for(i=0;i<2*N;i++){
		if((bitmask & (1<<i))==0)break;
	}
	for(j=i+1;j<2*N;j++){
		if((bitmask & (1<<j))==0){
			minDist=std::min(minDist,solve(bitmask | (1<<i) | (1<<j))+ dist(i,j));
		}
	}

	return memo[bitmask]=minDist;

}

int main(){
	int CASE=1;
	while(cin>>N){
		if(N==0)break;
		memset(memo,0,sizeof memo);
		memset(x,0,sizeof x);
		memset(y,0,sizeof y);
		string s;
		int xc,yc;
		for(int i=0;i<2*N;i++){
			cin>>s>>x[i]>>y[i];
		}
		double sol= solve(0);
		printf("Case %d: %.2f\n",CASE++,sol);
	}
}