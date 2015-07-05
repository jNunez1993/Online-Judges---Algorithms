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
map<char,int> m;


int main(){
	string s,t;
	cin>>s>>t;
	int y=0;
	int w=0;
	for(int i=0;i<t.length();i++){
		m[t[i]]++;
	}
	int a[s.length()]={0};
	for(int i=0;i<s.length();i++){
		if(m[s[i]]>=1){
			y++;
			m[s[i]]--;
			a[i]=1;
		}
	}
	
	for(int i=0;i<s.length();i++){
		if(a[i]!=1){
			int lower=tolower(s[i]);
			int upper=toupper(s[i]);
			if(m[lower]>=1){
				w++;
				m[lower]--;
			}
			else if(m[upper]>=1){
				w++;
				m[upper]--;
			}
		}
	}
	printf("%d %d\n",y,w);

}