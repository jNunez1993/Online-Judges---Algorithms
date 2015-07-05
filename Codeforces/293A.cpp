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
	string s,t;
	cin>>s>>t;
	string k=t;
	int length=s.length();
	if(length==1){
		k[0]=t[0]-1;
	}
	else{
		if(t[length-1]=='a'){
			int j=length-1;
			while(t[j]=='a' && j>=0){
				k[j]='z';
				j--;
			}
			k[j]=t[j]-1;
		}
		else{
			k[length-1]=t[length-1]-1;
		}
	}
	if(s.compare(k)==0)cout<<"No such string"<<endl;
	else cout<<k<<endl;
}