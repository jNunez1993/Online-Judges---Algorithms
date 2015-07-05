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

void swap(char &c,char &d){
	char temp=c;
	c=d;
	d=temp;
}


int main(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	string copy=s;
	while(t--){
		for(int i=1;i<n;i++){
			if(copy[i-1]=='B' && copy[i]=='G')swap(s[i-1],s[i]);
		}
		copy=s;
	}
	cout<<s<<endl;
}