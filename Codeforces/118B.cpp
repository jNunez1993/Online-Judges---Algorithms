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


void printSpaces(int s){
	for(int i=0;i<s;i++){
		cout<<" ";
	}
}

void printTop(int n){
	int max=1;
	int spaces=n*2;
	int curr=0;
	int k=1;
	int last=0;
	for(int i=0;i<n+1;i++){
		printSpaces(spaces);
		while(curr<k){
			if(i==0)printf("%d",curr);
			else printf("%d ",curr);
			last=curr;
			curr++;
		}
		curr=last-1;
		while(curr>=0){
			cout<<curr;
			if(curr!=0) cout<<" ";
			curr--;
		}
		k++;
		curr=0;
		spaces-=2;
		cout<<endl;
	}
}


void printBottom(int n){
	int spaces=2;
	int curr=0;
	int k=n-1;
	int last=0;
	for(int i=0;i<n;i++){
		printSpaces(spaces);
		while(curr<k){
			printf("%d ",curr);
			last=curr;
			curr++;
		}
		while(curr>=0){
			cout<<curr;
			if(curr!=0) cout<<" ";
			curr--;
		}
		k--;
		curr=0;
		spaces+=2;
		cout<<endl;
	}

}







int main(){
	int n;
	cin>>n;
	printTop(n);
	printBottom(n);
}