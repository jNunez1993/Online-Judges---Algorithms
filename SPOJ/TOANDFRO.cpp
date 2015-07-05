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


void solve(string s,int col){
	char **a=new char*[1000];
	for(int i=0;i<1000;i++){
		a[i]=new char[col];
	}
	int length=s.length();
	int count=0;
	int row=-1;
	bool done=false;
	while(!done){
		row++;
		if(row%2==0){
			for(int i=0;i<col;i++){
				if(count<length){
					a[row][i]=s[count];
					count++;
					
				}
				if(count>=length)
					done=true;
			}
		}
		else{
			for(int i=col-1;i>=0;--i){
				if(count<length){
					a[row][i]=s[count];
					count++;
					
				}
				if(count>=length)
					done=true;
			}
		}
		if(done) break;
	}
	row++;
	string res="";
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			res+=a[j][i];
		}
	}

	cout<<res<<endl;

}


int main(){
	int col;
	while(cin>>col){
		if(col==0) break;
		string s;
		cin>>s;
		solve(s,col);
		//print new line
	}
}