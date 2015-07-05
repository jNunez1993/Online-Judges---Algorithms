#include <iostream>
using namespace std;
const int SIZE=1000005;
unsigned long long dp[SIZE];

void precompute(){
	dp[1]=1;
	unsigned long long add=4;
	unsigned long long curr=4;
	for(int i=2;i<=SIZE;i++){
		dp[i]=dp[i-1]+curr;
		curr=dp[i]-dp[i-1]+add;
		if(i%2==0) add+=2;
		else add+=1;
	}
}


int main(){
	int cases;
	cin>>cases;
	precompute();
	while(cases--){
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
}