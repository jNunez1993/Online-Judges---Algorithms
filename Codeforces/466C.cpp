#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1000000000
using namespace std;
int n;
int a[500005];
int cnt[500005]={0};
int s[5000005]={0};
long long sum=0;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	long long res=0;
	if(sum%3==0){
		long long ss=0;
		for(int i=0;i<n;i++){
			ss+=a[i];
			if(ss==sum/3){
				cnt[i]=1;
			}
		}
		for(int i=1;i<n;i++){
			cnt[i]+=cnt[i-1];
		}
		ss=0;
		for(int i=n-1;i>=1;i--){
			ss+=a[i];
			if(ss==sum/3)res+=cnt[i-2];
		}
	}
	cout<<res<<endl;
	return 0;
	

}