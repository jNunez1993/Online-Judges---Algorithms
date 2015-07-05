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
	int ans[n];
	for(int i=0;i<n;i++){
		if(a[i]==i) ans[i]=0;
		else if(i%2==0){
			if(a[i]>i)ans[i]=n-a[i]+i;
			else ans[i]=i-a[i];
		}
		else if(i%2==1){
			if(a[i]>i)ans[i]=a[i]-i;
			else ans[i]= a[i]+n-i;
		}
	}
	int check=ans[0];
	for(int i=0;i<n;i++){
		if(ans[i]!=check){
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
	


}