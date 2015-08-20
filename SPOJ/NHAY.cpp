#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;


int main(){
	int n;
	string needle,haystack;
	while(cin>>n>>needle>>haystack){
		int pos=haystack.find(needle);
		if(pos!=-1){
			while(pos!=-1){
				cout<<pos<<endl;
				pos=haystack.find(needle,pos+1);
			}
		}
		cout<<endl;
	}
}