#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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

int convert(queue<int> q, int size){
	int num=0;
	int mult=size-1;
	for(int i=0;i<size;i++){
		int ele=q.front();
		q.pop();
		num+=(ele*pow(10,mult));
		mult--;
	}
	return num;
}


void solve(string s){
	queue<int> nums;
	queue<char> chars;
	long long i=0;
	long long a[100000]={0};
	long long index=0;
	while(s[i]!='='){
		if(!isspace(s[i])){
			if(isdigit(s[i])){
				nums.push(s[i]-'0');
			}
			else{
				chars.push(s[i]);
				a[index]=convert(nums,nums.size());
				nums=queue<int>();
				index++;
			}
		}
		i++;
		if(s[i]=='='){
			a[index]=convert(nums,nums.size());
			nums=queue<int>();
			index++;
		}
	}



	
	long long sum=0;
	long long j=0;
	char op=chars.front();
	chars.pop();
	if(op=='+'){
			sum=a[j]+a[j+1];
	}
	else if(op=='-'){
			sum=a[j]-a[j+1];
	}
	else if(op=='*'){
			sum=+a[j]*a[j+1];
	}
	else if(op=='/'){
			sum=a[j]/a[j+1];
	}
	j+=2;
	
	while(!chars.empty()){
		op=chars.front();
		chars.pop();
		if(op=='+'){
			sum=sum+a[j];
		}
		else if(op=='-'){
				sum=sum-a[j];		
		}
		else if(op=='*'){
				sum=sum*a[j];
		}
		else if(op=='/'){
				sum=sum/a[j];
		}
		j++;
	}
	
	printf("%lld\n",sum);



}

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		cout<<endl;
		string equation;
		getline(cin>>ws,equation);
		solve(equation);
	}
}