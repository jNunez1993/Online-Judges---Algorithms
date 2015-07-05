#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<pair<int,int> >  v[100000];
vector<int> visit;

void build_graph(int n,int m){
	for(int i=1;i<=2*m;i++){
		v[i].push_back(make_pair(i-1,0));
		v[i].push_back(make_pair(2*i,0));
	}

}


int main(){
	int n,m;
	cin>>n>>m;
	if(n>m){
		cout<<n-m<<endl;
		return 0;
	}
	bool done=false;
	int moves=0;
	visit.assign(2*m,0);
	bool found=false;
	build_graph(n,m);
	queue<pair<int,int> > q;
	visit[n]=1;
	q.push(make_pair(n,0));
	while(!q.empty() && !found){
		pair<int,int> front= q.front();q.pop();
		for(int i=0;i<v[front.first].size();i++){
			if(!visit[v[front.first][i].first]){
				pair<int,int> p= v[front.first][i];
				visit[p.first]=1;
				p.second=front.second+1;
				q.push(p);
				if(p.first==m){
					moves=p.second;
					found=true;
					break; //
				}
			}
		}
	}
	cout<<moves<<endl;
	return 0;
}