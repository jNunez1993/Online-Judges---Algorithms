#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(i>0) a[i][j]+=a[i-1][j];
			if(j>0) a[i][j]+=a[i][j-1];
			if(i>0 && j>0) a[i][j]-=a[i-1][j-1];
		}
	}

	int maxSubRect=(-1)*INF, subRect;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=i;k<n;k++)
				for(int l=j;l<n;l++){
					subRect=a[k][l];
					if(i>0)subRect-=a[i-1][l];
					if(j>0)subRect-=a[k][j-1];
					if(i>0 && j>0)subRect+=a[i-1][j-1];
					maxSubRect=std::max(maxSubRect,subRect);
				}

	cout<<maxSubRect<<endl;
}