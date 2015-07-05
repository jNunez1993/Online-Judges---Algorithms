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
map<string,int> m;

int main(){
	int n;
	cin>>n;
	string a[n];
	int rolling[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
		rolling[i]=m[a[i]];
	}
	for(int i=0;i<n;i++){
		if(m[a[i]]==1 || rolling[i]==1)
			cout<<"OK"<<endl;
		else{ 
			cout<<a[i]<<rolling[i]-1<<endl;
		}
	}


}