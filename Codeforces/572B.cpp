#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,s;
char d[1005];
int p[1005]={0};
int q[1005]={0};
char fid[1005];
int fip[1005]={0};
int fiq[1005]={0};


int main(){
	cin>>n>>s;
	char di;
	int pi,qi;
	for(int i=1;i<=n;i++){
		cin>>di>>pi>>qi;
		d[i]=di;
		p[i]=pi;
		q[i]=qi;
	}
	int idx=1;
	int used[1005]={0};
	for(int i=1;i<=n;i++){
		if(used[i]==1)continue;
		fid[idx]=d[i];
		fip[idx]=p[i];
		fiq[idx]=q[i];
		for(int j=i+1;j<=n;j++){
			if(d[i]==d[j] && p[i]==p[j]){
				fiq[idx]+=q[j];	
				used[j]=1;
			}
		}
		idx++;
	}
	vector<pair<int,int> > sell;
	vector<pair<int,int> > buy;
	for(int i=1;i<idx;i++){
		if(fid[i]=='S'){
			sell.push_back(make_pair(fip[i],fiq[i]));
		}
		else if(fid[i]=='B'){
			buy.push_back(make_pair(fip[i],fiq[i]));
		}
	}
	int k=s;
	if(sell.size()!=0){
		sort(sell.begin(),sell.end(),std::less<pair<int,int> >());
		if(k>sell.size())k=sell.size();
		for(int i=k-1;i>=0 ;i--){
			printf("S %d %d\n",sell[i].first,sell[i].second);
		}
	}
	k=s;
	if(buy.size()!=0){
		sort(buy.begin(),buy.end(),std::greater<pair<int,int> >());
		if(k>buy.size())k=buy.size();
		for(int i=0;i<k;i++){
			printf("B %d %d\n",buy[i].first,buy[i].second);
		}
	}
}