#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;

class SegmentTree{
private:
	vector<int> st,a;
	int size;
	int left(int n){
		return n<<1;
	}
	int right(int n){
		return (n<<1)+1;
	}
	void build(int idx,int l,int r){
		if(l>r)return;
		if(l==r){
			st[idx]=a[l];
			return;
		}
		build(left(idx),l,(l+r)/2);
		build(right(idx),1+(l+r)/2,r);
		st[idx]=std::min(st[left(idx)],st[right(idx)]);
	}

public:
	SegmentTree(vector<int> a){
		this->a=a;
		size=a.size();
		st.assign(size*4,0);
		build(1,0,size-1);
	}
	int query(int idx,int l,int r,int i,int j){
		if(l>r || l>j || r<i){
			return INF;
		}
		if(l>=i && r<=j){
			return st[idx];
		}
		int q1=query(left(idx),l,(l+r)/2,i,j);
		int q2=query(right(idx),1+(l+r)/2,r,i,j);
		return std::min(q1,q2);
	}
};

int main(){
	int n,input;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		cin>>input;
		a.push_back(input);
	}
	SegmentTree st(a);
	int qn,x,y;
	cin>>qn;
	for(int i=0;i<qn;i++){
		cin>>x>>y;
		int ans=st.query(1,0,n-1,x,y);
		cout<<ans<<endl;
	}
}