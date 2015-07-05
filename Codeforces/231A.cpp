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
	int a,b,c;
	cin>>n;
	int count=0;
	while(n--){
		cin>>a>>b>>c;
		if(!(a==1 && b==0 && c==0 || a==0 && b==1 && c==0 || a==0 && b==0 && c==1 || a==0 && b==0 && c==0))
			count++;
	}
	cout<<count<<endl;
}