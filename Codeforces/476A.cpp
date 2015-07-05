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
	int minMoves=n%2==0?	n/2:n/2+1;
	int maxMoves=n;
	while(minMoves<=maxMoves){
		if(minMoves%m==0)break;
		minMoves++;
	}
	if(minMoves<=n) cout<<minMoves<<endl;
	else cout<<-1<<endl;
	return 0;
}