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

void swap(char &a){
	a= a=='1'? '0':'1';
}


int main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	char grid[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<n && j<n){
				grid[i][j]=s[i][j];
			}
		}
	}
	int col[n];
	int evenCol[n];
	int min=n/2;
	int cnt=0;
	int evenColIndex=0;
	int index=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(grid[j][i]=='1')cnt++;
		}
		if(cnt<min){col[index]=i; index++;}
		if(cnt==min){
			evenCol[evenColIndex]=i;
			evenColIndex++;
		}
		cnt=0;
	}
	//swaps col with mins
	for(int i=0;i<index;i++){
		int c=col[i];
		for(int j=0;j<n;j++){
			swap(grid[j][c]);
		}
	}

	int times=(int)pow(2,evenColIndex);
	for(int i=0;i<times;i++){
		for(int j=0;j<evenColIndex;j++){
			
			if(j & i){
				swap(grid[j][c])
			}
		}
	}





	int rowcnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(grid[i][j]!='1')
				break;
			if(j==n-1)rowcnt++;
		}
	}

	cout<<rowcnt<<endl;

}