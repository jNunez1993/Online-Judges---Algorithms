#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
string s,t;
int a[50];
int b[50];

bool solve(){
	for(int i=0;i<s.length();i++){
		a[s[i]-'A']++;
		b[t[i]-'A']++;
	}
	sort(a,a+26);
	sort(b,b+26);

	for(int i=0;i<26;i++){
		if(a[i]!=b[i])return false;
	}

	return true;
}

int main(){
	while(cin>>t>>s){
		memset(a,0,sizeof a);
		memset(b,0,sizeof b);
		if(solve())printf("YES\n");
		else printf("NO\n");
	}
}