#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


int main(){
	int cases;
	cin>>cases;
	int cnum=1;
	while(cases--){
		int num;
		cin>>num;
		int h[num],w[num];
		for(int i=0;i<num;i++)cin>>h[i];
		for(int i=0;i<num;i++)cin>>w[i];

		int lis[num];
		int lds[num];
		for(int i=0;i<num;i++){
			lis[i]=w[i];
			lds[i]=w[i];
		}

		for(int i=1;i<num;i++){
			for(int j=0;j<i;j++){
				if(h[i]>h[j] && lis[i]<lis[j]+w[i]){
					lis[i]=std::max(lis[i],lis[j]+w[i]);
				}
			}
		}

		for(int i=1;i<num;i++){
			for(int j=0;j<i;j++){
				if(h[i]<h[j] && lds[i]<lds[j]+w[i]){
					lds[i]=std::max(lds[i],lds[j]+w[i]);
				}
			}
		}

		int max=0;
		int min=0;
		for(int i=0;i<num;i++){
			max=std::max(lis[i],max);
			min=std::max(lds[i],min);
		}
		if(max>=min)printf("Case %d. Increasing (%d). Decreasing (%d).\n",cnum,max,min);
		else printf("Case %d. Decreasing (%d). Increasing (%d).\n",cnum,min,max);
		cnum++;
	}
}