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


long long isPowerOfTwo (long long n)
{
  return ((n != 0) && !(n & (n - 1)));
}

int main(){
	long long n;
	cin>>n;
	if(isPowerOfTwo(n))
		cout<<"TAK"<<endl;
	else
		cout<<"NIE"<<endl;

}