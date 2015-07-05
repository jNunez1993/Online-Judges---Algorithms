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
/*
AB^2+AC=s;
AB^2+AC^2=BC^2
BC=2r;
AB^2+AC^2=4r^2
AB^2=4r^2-AC^2
s=4r^2-AC^2+AC
//rewrite
s=AC^2-AC-4R^2
=quadratic function
max val occurs at vertex
v=-b/2a;

AC=-b/2a
AC=1/2
-(1/2)^2+1/2+4*1*1;
4.25;


*/

int main(){
	int cases;
	cin>>cases;
	int i=1;
	while(cases--){
		long long r;
		cin>>r;
		double ans=4*r*r+.25;
		printf("Case %d: %.2f\n",i,ans);
		i++;
	}
}