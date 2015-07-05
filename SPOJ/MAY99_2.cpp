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
char arr[5]={'u','m','a','n','k'};

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		long long n;
		cin>>n;
		string k;
		while(n>0){
			int r;
			r=n%5;
			if(r==0)n=n/5-1;
			else n=n/5;
			k = string() + arr[r] + k;
		}
		cout<<k<<endl;
	}
}