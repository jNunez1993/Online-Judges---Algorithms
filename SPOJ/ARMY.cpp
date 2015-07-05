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
	while(cases--){
		int ng;
		int nm;
		cin>>ng>>nm;
		int god[ng];
		int mech[nm];
		for(int i=0;i<ng;i++)
			cin>>god[i];
		for(int i=0;i<nm;i++)
			cin>>mech[i];

		sort(god,god+ng);
		sort(mech,mech+nm);

		bool done=false;
		int i=0;
		int j=0;
		while(!done){
			if(nm==0 || ng==0){
				done=true;
				break;
			}
			if(god[i]==mech[j]){
				nm--;
				j++;
			}
			else if(god[i]>mech[j]){
				nm--;
				j++;
			}
			else if(god[i]<mech[j]){
				ng--;
				i++;
			}
		}

		if(nm==0)
			cout<<"Godzilla"<<endl;
		if(ng==0)
			cout<<"MechaGodzilla"<<endl;
	}
}