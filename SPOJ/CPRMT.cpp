#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;

int main(){
	string a,b;
	while(cin>>a>>b){
		int aa[26]={0};
		int bb[26]={0};
		for(int i=0;i<a.length();i++){
			aa[a[i]-'a']++;
		}
		for(int i=0;i<b.length();i++){
			bb[b[i]-'a']++;
		}
		string s="";
		char curr='a';
		for(int i=0;i<26;i++){
			int min=std::min(aa[i],bb[i]);
			for(int j=0;j<min;j++)
				s+=curr;
			curr++;
		}
		sort(s.begin(),s.end());
		cout<<s<<endl;
	}
}