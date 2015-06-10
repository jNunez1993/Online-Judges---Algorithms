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
map<int,int> m;

int main(){
	int n;
	while(cin>>n){
		if(n==-1) break;
		m[1]=1;
		m[7]=1;
		int mult=12;
		int num=7;
		while(num<1000000010){
			m[num+mult]=1;
			num+=mult;
			mult+=6;
		}
		if(m[n]==1){
			cout<<"Y"<<endl;
		}
		else{
			cout<<"N"<<endl;
		}
		
	}
}