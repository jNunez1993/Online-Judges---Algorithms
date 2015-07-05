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
	int r,c;
	cin>>r>>c;
	char ch;
	vector<pair<int,int> > v;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>ch;
			if(ch=='S')v.push_back(make_pair(i,j));
		}
	}
	int rows=0;
	int cnt=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<v.size();j++){
			if(i==v[j].first)break;
			if(j==v.size()-1){rows+=c; cnt++;}
		}
	}
	int cols=0;
	int diff=r-cnt;
	for(int i=0;i<c;i++){
		for(int j=0;j<v.size();j++){
			if(i==v[j].second)break;
			if(j==v.size()-1)cols+=diff;
		}
	}
	if(v.size()==0) cout<<r*c<<endl;
	else
		cout<<rows+cols<<endl;;


}