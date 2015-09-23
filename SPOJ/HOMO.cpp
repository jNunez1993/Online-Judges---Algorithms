#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
map<int,int> m;
set<int> st;
bool isHomo=false;
bool isHetero=false;

void print(){
	if(isHomo && isHetero)printf("both\n");
	else if(isHomo && !isHetero)printf("homo\n");
	else if(!isHomo && isHetero)printf("hetero\n");
	else{
		printf("neither\n");
	}
}


void det(){
	map<int,int>::iterator iter=m.begin();
	int first=iter->first;
	bool isHm=false;
	bool isHt=false;
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
		if(it->second==2)isHm=true;
		if(it->first!=first)isHt=true;
	}
	isHomo=isHm;
	isHetero=isHt;
}
 
 
int main(){
	int n;
	scanf("%d",&n);
	char op[10];
	int val;
	for(int i=0;i<n;i++){
		scanf("%s %d",op,&val);
		if(strcmp(op,"insert")==0){
			m[val]++;
			st.insert(val);
			if(st.size()>1) isHetero=true;
			if(m[val]==2)det();
			print();
		}
		else{
			map<int,int>::iterator it=m.find(val);
			if(it->second>0){
				m[val]--;
				if(it->second==0){
					m.erase(val);
					st.erase(it->first);
					if(st.size()>1)isHetero=true;
					else isHetero=false;
				}
				else if(it->second==1){
					det();
				}
			}
			else{
				m.erase(val);
			}
			print();
		}
	}
} 