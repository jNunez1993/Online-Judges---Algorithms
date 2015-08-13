#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
#define DEBUG(x)cout<<x<<endl;

int fact(int n){
	if(n==0 || n==1)return 1;
	return n*fact(n-1);
}

int main(){
	string s1,s2;
	cin>>s1>>s2;
	int n1=0,n2=0;
	for(int i=0;i<s1.length();i++){
		if(s1[i]=='+')n1++;
		else n1--;
	}
	int qmarks=0;
	for(int i=0;i<s2.length();i++){
		if(s2[i]=='+')n2++;
		else if(s2[i]=='-')n2--;
		else qmarks++;
	}
	int diff=n1-n2;
	if(qmarks==0){
		if(diff==0)cout<<1<<endl;
		else cout<<0<<endl;
	}
	else if((abs(diff)<=qmarks) && (qmarks-abs(diff))%2==0){
		if(qmarks-abs(diff)==0){
			cout<<std::setprecision(9)<<(double)(1/pow(2,qmarks))<<endl;
		}
		else{
			int qdiff=qmarks/2+(diff/2);
			double n=(double)(fact(qmarks)/(fact(qdiff)*fact(qmarks-qdiff)));
			cout<<std::setprecision(9)<<(double)(n/pow(2,qmarks))<<endl;
		}
	}
	else{
		cout<<0<<endl;
	}
}