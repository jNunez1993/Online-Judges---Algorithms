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
	int books;
	cin>>books;
	long long res=0;

	for(int i=1;i<=books;i++){
	if(i<10) res+=1;
	else if(i<100) res+=2;
	else if(i<1000) res+=3;
	else if(i<10000) res+=4;
	else if(i<100000) res+=5;
	else if(i<1000000) res+=6;
	else if(i<10000000) res+=7;
	else if(i<100000000) res+=8;
	else if(i<1000000000){
	long long diff=books-99999999;
			res+=(diff*9);
			if(books==1000000000)res=8888888899;
			break;
		}
	}
	cout<<res<<endl;
}