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
	int packets;
	while(cin>>packets){
		if(packets==-1) break;
		int sum=0;
		int a[packets];
		for(int i=0;i<packets;i++){
			cin>>a[i];
			sum+=a[i];
		}

		if(sum%packets==0){
			int avg=sum/packets;
			int movesNeeded=0;
			for(int i=0;i<packets;i++){
				if(a[i]<avg){
					movesNeeded+=(avg-a[i]); 
				}
			}
			cout<<movesNeeded<<endl;
		}
		else{
			cout<<-1<<endl;
		}


	}
}