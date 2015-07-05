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
	int cases;
	cin>>cases;
	while(cases--){
		long long t,lt,sum;
		cin>>t>>lt>>sum;
		long long diff=lt-t;
		long long n=(sum*2)/(t+lt);
		long long interval=diff/(n-5);
		long long begin=t-interval*2;
		cout<<n<<endl;
		for(int i=1;i<=n;i++){
			cout<<begin;
			if(i!=n) cout<<" ";
			begin+=interval;
		}
		cout<<endl;
	}
}