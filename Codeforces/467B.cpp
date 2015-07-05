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

int solve(int fedor, int pf,int n,int k){
	for(int i=0;i<n;i++){
		int bit=(int)pow(2,i);
		if((fedor & bit)!= (pf & bit))k--; 
		if(k<0) return 0;
	}
	return 1;
}



int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[m+1];
	for(int i=0;i<m+1;i++){
		cin>>a[i];
	}
	int cnt=0;
	int fedor=a[m];
	for(int i=0;i<m;i++){
		cnt+=solve(fedor,a[i],n,k);
	}
	cout<<cnt<<endl;

}