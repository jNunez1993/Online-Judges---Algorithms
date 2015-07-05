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
	int n;
	while(cin>>n){
		if(n==0) break;
		int a[n+1];
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		int inv[n];
		for(int i=1;i<=n;i++){
			inv[a[i]]=i;
		}
		bool flag=false;
		for(int i=1;i<=n;i++){
			if(a[i]!=inv[i]){
				flag=true;
				break;
			}
		}

		if(flag)
			cout<<"not ambiguous"<<endl;
		else
			cout<<"ambiguous"<<endl;

	}
}