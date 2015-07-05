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

bool isNum(string n){
	for(int i=0;i<n.length();i++){
		if(!(n[i]>='0' && n[i]<='9'))
			return false;
	}
	return true;
}

int toNum(string s){
	int n;
	istringstream (s) >> n;
	return n;
}



void solve(string eq){
	int i=0;
	string num1,num2,num3;
	while(!isspace(eq[i])){
		num1+=eq[i];
		i++;
	}
	i+=3;
	while(!isspace(eq[i])){
		num2+=eq[i];
		i++;
	}
	
	i+=3;
	while(i<eq.length()){
		num3+=eq[i];
		i++;
	}
	bool flag1=false;
	bool flag2=false;
	bool flag3=false;
	if(isNum(num1)) flag1=true;
	if(isNum(num2)) flag2=true;
	if(isNum(num3)) flag3=true;

	int int1,int2,int3;
	if(flag1 && flag2){
		int3=toNum(num1) + toNum(num2);
		printf("%s + %s = %d\n",num1.c_str(),num2.c_str(),int3);
	}
	else if(flag1 && flag3){
		int2=toNum(num3) - toNum(num1);
		printf("%s + %d = %s\n",num1.c_str(),int2,num3.c_str());
	}
	else if(flag2 && flag3){ 
		int1=toNum(num3) - toNum(num2);
		printf("%d + %s = %s\n",int1,num2.c_str(),num3.c_str());
	}


}

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		string equation;
		getline(cin>>ws,equation);
		solve(equation);
	}
}