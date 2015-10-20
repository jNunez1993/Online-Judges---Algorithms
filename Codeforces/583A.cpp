#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;


int main(){
	int n;
	cin>>n;
	int f,s;
	int a[n+1][n+1]={0};
	vector<int> ans;
	for(int i=0;i<n*n;i++){
		cin>>f>>s;
		if(!a[f][s]){
			for(int k=1;k<=n;k++){
				a[f][k]=1;
				a[k][s]=1;
			}
			ans.push_back(i+1);
		}
	}
	for(int i=0;i<ans.size();i++){
		if(ans.size()-1==i)cout<<ans[i];
		else cout<<ans[i]<<" ";
	}
}