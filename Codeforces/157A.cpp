#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int b[30][30];

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	int cnt=0;
	int row[n];
	int col[n]={0};

	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=b[i][j];
			col[j]+=b[i][j];
		}
		row[i]=sum;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(col[j]>row[i])cnt++;
		}
	}
	cout<<cnt<<endl;
}