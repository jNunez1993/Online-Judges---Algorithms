#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
map<string,int> m;

void reset(){
	m["TTT"]=0;
	m["TTH"]=0;
	m["THT"]=0;
	m["THH"]=0;
	m["HTT"]=0;
	m["HTH"]=0;
	m["HHT"]=0;
	m["HHH"]=0;
}


int main(){
	int cases;
	cin>>cases;
	while(cases--){
		reset();
		int cnum;
		cin>>cnum;
		char a[40]={0};
		for(int i=0;i<40;i++){
			cin>>a[i];
		}

		for(int i=0;i<38;i++){
			string s;
			s= s + a[i]+a[i+1]+a[i+2];
			m[s]++;
		}
		printf("%d ",cnum);
		printf("%d ",m["TTT"]);
		printf("%d ",m["TTH"]);
		printf("%d ",m["THT"]);
		printf("%d ",m["THH"]);
		printf("%d ",m["HTT"]);
		printf("%d ",m["HTH"]);
		printf("%d ",m["HHT"]);
		printf("%d",m["HHH"]);
		cout<<endl;
	}
}