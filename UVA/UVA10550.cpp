#include <iostream>
#include <stdio.h>
using namespace std;

/*
Solution to CombinationLock
http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=342&page=show_problem&problem=1491
Juan Nunez
3/5/2015
*/

int ret(int a, int b);
int ret2(int b, int c);
int ret3(int a,int init);


int main(){
	int init, a,b,c;
	scanf("%d %d %d %d",&init,&a,&b,&c);
	while(!(init==0 && a==0 && b==0 && c==0)){
		int start=720+360;
		int firstTurn= ret3(a,init)*9;  //changed from (40+init-a)*9;
		int secondTurn= ret(a,b)*9;
		int thirdTurn= ret2(b,c)*9;
		int answer= start+firstTurn+secondTurn+thirdTurn;
		printf("%d\n",answer);
		scanf("%d%d%d%d",&init,&a,&b,&c);
	}

}
int ret3(int a, int init){
	if(init>=a){
		return init-a;
	}
	else{
		return 40+init-a;
	}
}

int ret(int a, int b){
	if(a==b){
		return 0;
	}
	if(a>b){
		return 40+b-a;
	}
	else{
		return b-a;
	}
}

int ret2(int b,int c){
	if(b==c){
		return 0;
	}
	if(c>b){
		return 40-c+b;
	}
	else{
		return b-c;
	}
}
