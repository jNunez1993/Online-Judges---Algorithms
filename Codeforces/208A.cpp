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
int last=0;

string trim(string s){
	int i=0;
	while(isspace(s[i])){
		i++;
	}
	s.erase(s.begin(),s.begin()+i);

	i=s.length()-1;
	while(isspace(s[i])){
		i--;
	}
	string k=string()+ s[0];
	for(int i=1;i<s.length();i++){
		if(!isspace(s[i]) || !isspace(s[i-1])){
			k+=s[i];
		}
	}

	return k;
}


int main(){
	string s;
	cin>>s;
	while(s.find("WUB")!=-1){
		int pos=s.find("WUB");
		s.replace(pos,3," ");
	}
	s=trim(s);
	cout<<s<<endl;
	return 0;
}