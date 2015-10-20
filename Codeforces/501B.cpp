#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int q;
map<string,string> m;
set<string> s1;
set<string> s2;

int main(){
	cin>>q;
	string o,n;
	for(int i=0;i<q;i++){
		cin>>o>>n;
		m[o]=n;
		s2.insert(n);
		if(!s2.count(o))s1.insert(o);
	}
	cout<<s1.size()<<endl;
	for(std::set<string>::iterator it=s1.begin();it!=s1.end();it++){
		string ol=*it;
		string copy=ol;
		string ne="";
		while(m[copy]!=""){ 
			ne=m[copy];
			copy=m[copy];
			if(copy==ol)break;
		}
		cout<<ol<<" "<<ne<<endl;
	}

}