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


bool isVowel(char a){
	char vowels[]={'A','a','E','e','Y','y','I','i','O','o','U','u'};
	for(int i=0;i<12;i++){
		if(a==vowels[i])
			return true;
	}
	return false;
}

int main(){
	string s;
	cin>>s;
	string res="";
	if(!isVowel(s[0])){
			res+=".";
			res+=tolower(s[0]);
		}
	for(int i=0;i<s.length()-1;i++){
		if(!isVowel(s[i+1])){
			res+=".";
			res+=tolower(s[i+1]);
		}
	}
	cout<<res<<endl;
}
