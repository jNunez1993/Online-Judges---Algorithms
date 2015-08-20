#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int matrix[21][21];

void floydWarshall(){
	for(int k=1;k<=20;k++)
		for(int i=1;i<=20;i++)
			for(int j=1;j<=20;j++)
				matrix[i][j]=std::min(matrix[i][j],matrix[i][k]+matrix[k][j]);
}

void init(){
	for(int i=1;i<=20;i++)
		for(int j=1;j<=20;j++)matrix[i][j]=INF;
}


int main(){
	int cnum=1;
	int follow,adjacent,pairs,s,d;
	while(cin>>follow){
		init();
		for(int i=0;i<19;i++){
			if(i!=0)
				cin>>follow;
			for(int j=0;j<follow;j++){
				cin>>adjacent;
				matrix[i+1][adjacent]=1;
				matrix[adjacent][i+1]=1;
			}
		}
		floydWarshall();
		cin>>pairs;
		printf("Test Set #%d\n",cnum++);
		while(pairs--){
			cin>>s>>d;
			if(s>=10) printf("%d",s);
			else printf(" %d",s);
			printf(" to");
			if(d>=10) printf(" %d",d);
			else printf("  %d",d);
			printf(": %d",matrix[s][d]);
			printf("\n");
		}
		cout<<endl;
	}
}