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
	int g,b;
	while(cin>>g>>b){
		if(g==-1 && b==-1) break;
		if(g==0 & b==0)
			cout<<0<<endl;
		else if(g==0)
			cout<<b<<endl;
		else if(b==0)
			cout<<g<<endl;
		else if(b==g)
			cout<<1<<endl;
		else{
			int maxx=max(g,b);
			int minn=min(g,b)+1;
			cout<<ceil((double)maxx/minn)<<endl;
		}

	}
}