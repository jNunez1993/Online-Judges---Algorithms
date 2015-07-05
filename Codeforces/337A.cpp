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
	for(int i=0;i<m;i++)
		cin>>a[i];
	sort(a,a+m);
	int res=1000000000;
	for(int i=0;i<m-n+1;i++){
		res=min(res,a[i+n-1]-a[i]);
	}
	cout<<res<<endl;
}