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
	int a,b;
	cin>>a>>b;
	int c[3]={0};

	for(int i=1;i<=6;i++){
		if(abs(a-i)<abs(b-i))c[0]++;
		else if(abs(a-i)>abs(b-i)) c[1]++;
		else c[2]++;
	}
	printf("%d %d %d\n",c[0],c[2],c[1]);
}