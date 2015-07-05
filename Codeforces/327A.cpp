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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int cnt=0;
			for(int k=0;k<n;k++){
				if(k>=i && k<=j)
					cnt+=(1-a[k]);
				else
					cnt+=a[k];
			}
			if(cnt>max)max=cnt;
		}
	}
	cout<<max<<endl;

}