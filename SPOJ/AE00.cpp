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

int solve(int N){
	int res=N;
	for(int i=2;i<N/2;i++){
		for(int j=i;j<N/2;j++){
			if(i*j<=N)res++;
		}
	}
	return res+1;
}


int main(){
	int N;
	cin>>N;
	if(N==1)
		cout<<1<<endl;
	
	else if(N==2)
		cout<<2<<endl;
	else if(N==3) cout<<3<<endl;
	else{
		cout<<solve(N)<<endl;
	}
}