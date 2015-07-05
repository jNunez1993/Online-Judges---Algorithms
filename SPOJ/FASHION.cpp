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
		int N;
		cin>>N;
		int m[N];
		int w[N];
		for(int i=0;i<N;++i){
			cin>>m[i];
		}
		for(int i=0;i<N;++i){
			cin>>w[i];
		}
		sort(m,m+N);
		sort(w,w+N);
		int sum=0;
		for(int i=N-1;i>=0;--i){
			sum+=(m[i]*w[i]);
		}
		cout<<sum<<endl;
	}
}