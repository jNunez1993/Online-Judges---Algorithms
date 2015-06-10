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

int chop(int num){
	string s=toString(num);
	int amount=0;
	for(int i=s.length()-1;i<=0;--i){
		if(s[i]=='0')
			amount++;
		else break;
	}

	s=s.substr(0,s.length()-amount);
	stringstream ss;
	for(int i=0;i<s.length();i++){
		ss<<(s[i]-'0');
	}
	int res;
	ss>>res;
	return res;
}


int process(int num){
	num=chop(num);
	int arr[100];
	int count=0;
	while(num!=0){
		int mod=(num)%10;
		arr[count]=mod;
		count++;
		num/=10;
	}
	stringstream ss;
	for(int i=0;i<count;i++){   //from int array to integer.
		ss<<arr[i];
	}
	int res;
	ss>>res;
	return res;
}




int main(){
	int cases;
	cin>>cases;

	while(cases--){
		int first,second;
		cin>>first>>second;
		first=process(first);
		second=process(second);
		int res=first+second;
		res=process(res);
		cout<<res<<endl;
	}
}