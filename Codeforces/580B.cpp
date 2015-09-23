#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,d;
vector<pair<long long,long long> > f;

int main(){
	cin>>n>>d;
	int mo,fff;
	for(int i=0;i<n;i++){
		cin>>mo>>fff;
		f.push_back(make_pair(mo,fff));
	}
	sort(f.begin(),f.end());
	vector<long long> money(n);
	vector<long long> ff(n);
	for(int i=0;i<n;i++){
		money[i]=f[i].first;
		ff[i]=f[i].second;
	}

	long long pre[n+1];
	pre[0]=0;
	for(int i=1;i<=n;i++){
		pre[i]=f[i-1].second+pre[i-1];
	}

	long long ans=0;
	for(int i=1;i<=n;i++){
		int hi=upper_bound(money.begin()+i-1,money.end(),money[i-1]+d-1)-money.begin();
		ans=std::max(ans,pre[hi]-pre[i-1]);
	}
	cout<<ans<<endl;
	

}