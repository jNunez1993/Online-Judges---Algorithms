#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	string s;
	cin>>s;
	int idx=1;
	vector<int> ab;
	vector<int>ba;
	for(int i=0;i<s.length()-1;i++){
		if(s[i]=='A' && s[i+1]=='B'){
			ab.push_back(i);
		}
		else if(s[i]=='B' && s[i+1]=='A'){
			ba.push_back(i);
		}
	}

	int i=0;
	int j=0;
	bool yes=false;
	for(int i=0;i<ab.size() && !yes;i++){
		for(int j=0;j<ba.size();j++){
			if(abs(ab[i]-ba[j])>1){
				yes=true;
				break;
			}
		}
	}

	if(yes)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}


