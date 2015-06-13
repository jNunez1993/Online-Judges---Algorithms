#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#include <limits>
#include <iterator>
using namespace std;
map<int,int> m;
int size=0;

int* toArr(int n){
	int *a=new int[1000];
	int i=0;
	while(n!=0){
		a[i]=n%10;
		i++;
		n/=10;
	}
	size=i;
	return a;
}


int main(){
	int n;
	cin>>n;
	bool done=false;
	m[n]=1;
	int times=0;
	while(!done){
		times++;
		int *a=toArr(n);
		n=0;
		for(int i=0;i<size;i++){
			n+=pow(a[i],2);
		}
		if(m[n]==1){
			cout<<-1<<endl;
			done=true;
			break;
		}
		if(n==1){
			done=true;
			cout<<times<<endl;
			break;
		}
		m[n]=1;
	}



}