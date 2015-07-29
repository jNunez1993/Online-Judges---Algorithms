#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

struct segment{
	int i;
	int j;
	int length;
	segment(int i,int j,int length){
		this->i=i;
		this->j=j;
		this->length=length;
	}
};


int main(){
	int b;
	cin>>b;
	int route=1;
	while(b--){
		int s;
		cin>>s;
		int x;
		int sum=0,ans=0,i=1,j=2,_i=1,_j=2;
		vector<segment> segments;
		for(int k=1;k<s;k++){
			cin>>x;
			sum+=x;
			if(sum>=ans){
				_i=i;
				_j=j;
				segments.push_back(segment(_i,_j,sum));
			}
			ans=std::max(sum,ans);
			if(sum<0){
				sum=0;
				i=j;
			}
			j++;
		}
		vector<segment> idx;
		int longestcycle=0;
		for(int k=0;k<segments.size();k++){
			if(segments[k].length==ans){
				idx.push_back(segments[k]);
				longestcycle=std::max(longestcycle,segments[k].j-segments[k].i);
			}
		};
		for(int k=0;k<idx.size();k++){
			if(idx[k].j-idx[k].i==longestcycle){
				_i=idx[k].i;
				_j=idx[k].j;
				break;
			}
		}

		if(ans>0)printf("The nicest part of route %d is between stops %d and %d\n",route,_i,_j);
		else printf("Route %d has no nice parts\n",route);
		route++;
	}

}