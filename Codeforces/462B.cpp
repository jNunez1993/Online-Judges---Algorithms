#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1000000000
using namespace std;
long long cnt[27]={0};

int main(){
	long long n,k;
	string s;
	cin>>n>>k>>s;
	for(int i=0;i<s.length();i++){
		cnt[s[i]-'A']++;
	}	
	sort(cnt,cnt+27,std::greater<int>());
	long long sum=0;
	long long idx=0;
	while(k>0 && idx<=26){
		if(cnt[idx]<=k){
			sum+=(cnt[idx]*cnt[idx]);
			k-=cnt[idx];
		}
		else{
			sum+=(k*k);
			k=0;
		}
		idx++;
	}
	cout<<sum<<endl;
}