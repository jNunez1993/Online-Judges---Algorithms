#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
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


int main(){
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int max=a[n-1]-a[0];
	long long f=1;
	long long l=1;
	if(a[0]==a[n-1]){
		printf("%d ",max);
		cout<<(((n-1)*(n-1)+n-1)/2)<<endl;
	}
	else{
		for(int i=1;i<n-1;i++){
			if(a[i]==a[0])f++;
			else if(a[i]==a[n-1])l++;
		}
		printf("%d ",max);
		cout<<f*l<<endl;
	}
}	