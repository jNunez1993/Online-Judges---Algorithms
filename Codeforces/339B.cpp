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
	int n,m;
	cin>>n>>m;
	int a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	long long res=0;
	int i=1;
	res+=a[0]-1;
	m--;
	while(m!=0){
		if(a[i]>=a[i-1])
			res+=a[i]-a[i-1];
		else
			res+=(n-a[i-1]+a[i]);

		i++;
		m--;
	}
	cout<<res<<endl;
}