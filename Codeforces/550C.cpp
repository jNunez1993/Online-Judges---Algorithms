#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


int main(){
	string s;
	cin>>s;
	bool isPossible=false;
	int ans;
	int a,b,c;
	for(int i=0;i<s.length() && !isPossible;i++){
		a=s[i]-'0';
		if(a==0 || a%8==0){
			ans=a;
			isPossible=true;
			break;
		}
		for(int j=i+1;j<s.length() && !isPossible;j++){
			a=10*(s[i]-'0');
			b=s[j]-'0';
			if((a+b)%8==0){
				ans=a+b;
				isPossible=true;
				break;
			}
			for(int k=j+1;k<s.length() && !isPossible;k++){
				a=100*(s[i]-'0');
				b=10*(s[j]-'0');
				c=s[k]-'0';
				int num=a+b+c;
				if(num%8==0){
					ans=num;
					isPossible=true;
					break;
				}
			}
		}
	}
	if(isPossible){
		cout<<"YES"<<endl;
		cout<<ans<<endl;
	}
	else cout<<"NO"<<endl;

}