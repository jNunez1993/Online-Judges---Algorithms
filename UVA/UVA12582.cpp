#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
	int cases;
	cin>>cases;
	int t=1;
	while(cases--){
		string s;
		cin>>s;
		stack<char> st;
		int val[26]={0};
		st.push(s[0]);
		char current=s[0];
		for(int i=1;i<s.length();i++){
			st.push(s[i]);
			if(current!=st.top()){
				val[current-'A']++;
				current=st.top();
			}
			else{
				val[st.top()-'A']++;
				st.pop();
				st.pop();
				current= st.size()>0? st.top():0;
			}
		}
		val[s[0]-'A']--;
		cout<<"Case "<<t<<endl;
		char c='A';
		for(int i=0;i<26;i++){
			if(val[c-'A']!=0){
				cout<<c<<" = "<<val[c-'A']<<endl;
			}
			c++;
		}
		t++;
	}
}

