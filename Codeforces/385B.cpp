#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;


//bear
//4-1-3
int main(){
	string s;
	cin>>s;
	int cnt=0;
	int k=-1;
	for(int i=3;i<s.length();i++){
		if(s[i-3]=='b' && s[i-2]=='e' && s[i-1]=='a' && s[i-0]=='r')
			k=i-3;
		cnt+=k+1;
	}
	cout<<cnt<<endl;
}