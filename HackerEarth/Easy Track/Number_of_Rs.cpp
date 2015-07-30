#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		string s;
		cin>>s;
		int sum=0;
		int ans=0;
		int i=0,j=0,_i=0,_j=0;
		for(int k=0;k<s.length();k++){
			if(s[k]=='R')sum-=1;
			else sum+=1;
			if(sum>ans){
				_i=i;
				_j=j;
			}
			ans=std::max(ans,sum);
			if(sum<=0){
				sum=0;
				i=j+1;
			}
			j++;
		}
		int num=0;
		for(int m=_i;m<=_j;m++){
			if(s[m]=='K')num++;
		}
		while(_i>0){
			if(s[_i-1]=='R')
				num++;
			_i--;
		}
		while(_j<s.length()-1){
			if(s[_j+1]=='R')
				num++;
			_j++;
		}
		cout<<num<<endl;
	}
}