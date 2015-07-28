#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
	return a.first>b.first;
}

int main(){
	int trees;
	cin>>trees;
	vector<pair<int,int> > pos;
	vector<pair<int,int> > neg;
	int a,b;
	for(int i=0;i<trees;i++){
		cin>>a>>b;
		if(a>0)pos.push_back(make_pair(a,b));
		else neg.push_back(make_pair(a,b));
	}
	sort(pos.begin(),pos.end());
	sort(neg.begin(),neg.end(),compare);
	int total=0;
	int size=std::min(pos.size(),neg.size());

	for(int i=0;i<size;i++){
		total+=pos[i].second;
		total+=neg[i].second;
	}
	int maxx=0;
	if(size==0){
		if(size+1<=pos.size()){
			total+=pos[0].second;
		}
		else total+=neg[0].second;
	}
	else{
		if(size+1<=pos.size()){
			maxx=max(maxx,pos[size].second);
		}
		if(size+1<=neg.size()){
			maxx=max(maxx,neg[size].second);
		}
	}
	total+=maxx;

	cout<<total<<endl;

	

}