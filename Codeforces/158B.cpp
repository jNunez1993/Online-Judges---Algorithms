#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int num,res;
	res=0;
	int a[4]={0};
	for(int i=0;i<n;i++){
		cin>>num;
		a[num-1]++;
	}	
	res+=a[3];
	res+=a[1]/2;
	a[1]%=2;
	int m=min(a[2],a[0]);
	res+=m;
	a[2]-=m;
	a[0]-=m;
	int am=2*a[1]+a[0];
	res+=ceil((double)am/4);
	res+=a[2];

	cout<<res<<endl;

}


		