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
		cout<<endl;
		int num;
		cin>>num;
		long long a[num];
		long long sum=0;
		for(int i=0;i<num;++i){
			cin>>a[i];
			sum=(sum+a[i])%num;

		}

		if(sum%num==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
}