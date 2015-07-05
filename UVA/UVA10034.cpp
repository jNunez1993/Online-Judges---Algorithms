#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<pair<double, pair<int,int> > > res;

class UnionFind{
public:
	UnionFind(int n){
		rank.assign(n,0);
		p.assign(n,0);
		for(int i=0;i<n;i++)p[i]=i;
	}
	int findSet(int i){
		return p[i]==i?	i:p[i]=findSet(p[i]);
	}
	bool isSameSet(int i,int j){
		return findSet(i)==findSet(j);
	}
	void unionSet(int i,int j){
		if(!isSameSet(i,j)){
			int x=findSet(i);
			int y=findSet(j);
			if(rank[x]>rank[y])p[y]=x;
			else{
				p[x]=y;
				if(rank[x]==rank[y]) rank[y]++;
			}
		}
	}
private:
	vector<int> p;
	vector<int> rank;
};

double distance(double x0,double y0,double x1,double y1){
	return sqrt(pow(x0-x1,2)+pow(y0-y1,2));
}



int main(){
	int cases;
	cin>>cases;
	while(cases--){
		res.clear();
		int n;
		cin>>n;
		vector<pair<double,double> > crd;
		double a,b;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			crd.push_back(make_pair(a,b));
		}
		for(int i=0;i<crd.size();i++){
			pair<double,double> ele= crd[i];
			for(int j=0;j<crd.size();j++){
				res.push_back(make_pair(distance(ele.first,ele.second,crd[j].first,crd[j].second),make_pair(i,j)));
				res.push_back(make_pair(distance(ele.first,ele.second,crd[j].first,crd[j].second),make_pair(j,i)));
			}
		}

		sort(res.begin(),res.end());
		double mst_cost=0;
		UnionFind UF(res.size());
		for(int i=0;i<res.size();i++){
			pair<double,pair<int,int> > front=res[i];
			if(!UF.isSameSet(front.second.first,front.second.second)){
				mst_cost+=front.first;
				UF.unionSet(front.second.first,front.second.second);
			}
		}
		printf("%.2f\n",mst_cost);
		if(cases!=0)cout<<endl;
	}
}