#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;
vector<int> a[105];
vector<int> b[105];
int cnt[105]={0};

int main(){
	int n,m;
	cin>>n>>m;
	int in;

	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			cin>>in;
			a[j].push_back(in);
			b[j].push_back(in);
		}
	}

	for(int i=0;i<m;i++){
		sort(a[i].begin(),a[i].end());
	}

	for(int i=0;i<m;i++){
		int cmax=a[i][n-1];
		for(int j=0;j<n;j++){
			if(b[i][j]==cmax){
				cnt[j+1]++;
				break;
			}
		}
	}
	int winner=0;
	int max=0;
	for(int i=1;i<=n;i++){
		if(cnt[i]>max){
			max=cnt[i];
			winner=i;
		}
	}

	cout<<winner<<endl;

}