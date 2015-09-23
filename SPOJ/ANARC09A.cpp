#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
string s;
 
int main(){
	int t=1;
	while(cin>>s){
		if(s[0]=='-')break;
		int nops=0;
		int cntfront=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='{')cntfront++;
			else if(s[i]=='}' && cntfront==0){
				nops++;
				cntfront++;
			}
			else{
				cntfront--;
			}
		}
		
		printf("%d. %d\n",t++,cntfront/2+nops);
	}
} 