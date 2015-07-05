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
	int n,k;
	while(cin>>n>>k){
		int a[n];
		int count=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int kth=a[k-1];
		for(int i=0;i<n;i++){
			if(a[i]>=kth && a[i]>0)count++;
		}
		cout<<count<<endl;
	}
}