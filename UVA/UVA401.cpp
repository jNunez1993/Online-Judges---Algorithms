#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;



bool isPalin(string s){
	int length= s.length();
	int k=length-1;
	for(int i=0;i<k;i++){
		if(s[i]!=s[k]) return false;
		k--;
	}
	return true;
}

bool isMirror(string s, char* m){
	int length= s.length();
	int k=length-1;
	if(length==1){
		if(s[0]==m[s[0]]) return true;
		else return false;
	}
	for(int i=0;i<k;i++){
		if(s[i]!= m[s[k]]){
			return false;
		}
		k--;
	}
	return true;
}


int main(){
	string notP= " -- is not a palindrome.";
	string isP= " -- is a regular palindrome.";
	string isM= " -- is a mirrored string.";
	string isMP=" -- is a mirrored palindrome.";
	char m[3000];
	memset(m,0,sizeof(m));
	string s;
 	m['A']='A';
 	m['E']='3';
 	m['H']='H';
 	m['I']='I';
 	m['J']='L';
 	m['L']='J';
 	m['M']='M';
 	m['O']='O';
 	m['S']='2';
 	m['T']='T';
 	m['U']='U';
 	m['V']='V';
 	m['W']='W';
 	m['X']='X';
 	m['Y']='Y';
 	m['Z']='5';
 	m['1']='1';
 	m['2']='S';
 	m['3']='E';
 	m['5']='Z';
	m['8']='8';
	
	while(cin>>s){
		bool isPal= isPalin(s);
		bool isMir= isMirror(s,m);

		if(isPal==0&&isMir==0){
			cout<<s+notP+"\n"<<endl;
		}
		else if(isPal==1&&isMir==0){
			cout<<s+isP+"\n"<<endl;
		}
		else if(isPal==0&&isMir==1){
			cout<<s+isM+"\n"<<endl;
		}
		else{
			cout<<s+isMP+"\n"<<endl;
		}
	}
}