#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


bool canFit(int a1,int b1,int a2,int b2,int a3,int b3){
	if(a1-a2<0 || b1-b2<0)return false;
	if(a1-a2==0){
		if(a3<=a1 && b3<=b1-b2)return true;
	}
	else{
		int l1=a1-a2;
		int w1=b1;
		int l2=a1;
		int w2=b1-b2;
		if(a3<=l1 && b3<=w1 || a3<=l2 && b3<=w2) return true;
	}
	return false;
}


int main(){
	int a1,b1,a2,b2,a3,b3;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;


	if(canFit(a1,b1,a2,b2,a3,b3) || canFit(a1,b1,a2,b2,b3,a3)
	|| canFit(a1,b1,b2,a2,a3,b3) || canFit(a1,b1,b2,a2,b3,a3))printf("YES\n");
	else printf("NO\n");

	



}