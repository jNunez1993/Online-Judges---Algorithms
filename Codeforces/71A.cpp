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

string toString(int num){
	stringstream ss;
	ss<<num;
	return ss.str();
}


int main(){
	int n;
	cin>>n;
	while(n--){
		string s,res;
		cin>>s;
		int length=s.length();
		if(length>10)
			res=string()+s[0]+toString(length-2)+s[length-1];
		else
			res=s;
		cout<<res<<endl;
	}
}