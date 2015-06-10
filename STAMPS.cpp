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
	int cases;
	cin>>cases;
	int scen=1;
	while(cases--){
		int st;
		int fr;
		cin>>st>>fr;
		int a[fr];
		for(int i=0;i<fr;i++){
			cin>>a[i];
		}
		sort(a,a+fr);
		bool done=false;
		int numfr=0;
		int i=fr-1;
		while(i>=0){
			if(st>0){
				st-=a[i];
				numfr++;
				i--;
			}
			else
				break;
		}
		if(st<=0)
			printf("Scenario #%d:\n%d\n",scen,numfr);
		else
			printf("Scenario #%d:\n%s\n",scen,"impossible");
		printf("\n");
		scen++;
	}
}