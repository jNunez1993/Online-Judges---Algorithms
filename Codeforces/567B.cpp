#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
map<int,int> pre;
map<int,int> m;

int toNum(string s){
	int val;
	stringstream (s)>>val;
	return val;
}

string toString(int n){
	stringstream ss;
	ss<<n;
	return ss.str();
}


int main(){
	int n;
	cin>>n;
	string s;
	int total=0;
	string a[n];
	int inside[n];
	int idx=0;
	for(int i=0;i<n;i++){
		getline(cin>>ws,s);
		a[i]=s;
		int num=toNum(s.substr(2));
		if(s[0]=='+'){
			pre[num]++;
		}
		else if(s[0]=='-'){
			if(pre[num]==0){
				total++;
				inside[idx++]=toNum(s.substr(2));
			}
			else pre[num]--;
		}
	}

	for(int i=0;i<idx;i++){
		m[inside[i]]++;
	}
	int maxTotal=total;
	for(int i=0;i<n;i++){
		string k=a[i];
		if(k[0]=='+'){
			m[toNum(k.substr(2))]++;
			total++;
			maxTotal=std::max(maxTotal,total);
		}
		else{
			m[toNum(k.substr(2))]--;
			total--;
		}
	}

	cout<<maxTotal<<endl;




}