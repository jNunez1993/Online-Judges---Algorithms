#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
	if(p1.second!=p2.second)
		return p1.second>p2.second;

	return p1.first<p2.first;

}

int main(){
	int n;
	cin>>n;
	pair<int,int> a[n];
	int gal,u;
	for(int i=0;i<n;i++){
		cin>>gal>>u;
		a[i].first=u;
		a[i].second=gal;
	}

	sort(a,a+n,compare);
	int t[10005]={0};
	int taken=0;
	for(int i=0;i<n;i++){
		int j=a[i].first;
		bool placed=false;
		while(!placed && j>0){
			if(t[j]==1)j--;
			else{
				t[j]=1;
				taken+=a[i].second;
				placed=true;
				break;
			}
		}
	}
	cout<<taken<<endl;

}