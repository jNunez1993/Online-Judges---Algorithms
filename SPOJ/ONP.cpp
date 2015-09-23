#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
string s;


bool isOperator(char c){
	if(c=='+' || c=='-' || c=='*' || c=='/' || c=='(' || c=='^')return true;
	return false;
}

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		cin>>s;
		stack<char> ops;
		for(int i=0;i<s.length();i++){
			if(s[i]==')'){
				while(!ops.empty()){
					if(ops.top()=='('){
						ops.pop();
						break;
					}
					cout<<ops.top();
					ops.pop();
				}
			}
			else if(isOperator(s[i])){
				ops.push(s[i]);
			}
			else{
				cout<<s[i];
			}
		}
		while(!ops.empty()){
			cout<<ops.top();
			ops.pop();
		}
		cout<<endl;
	}
}