#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <queue> 
#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;


template <typename T>
std::string to_string(T value)
{
	std::ostringstream os ;
	os << value ;
	return os.str() ;
}



int main(){
	int num;
	int x=5;
	while(cin>>num){
		if(num==0)break;
		queue<int> q;
		for(int i=1;i<=num;i++){
			q.push(i);
		}

		int count=num-1;
		if(count==0){
			cout<<"Discarded cards:"<<endl;
			cout<<"Remaining card: 1"<<endl;
		}
		else{
		string discard= "Discarded cards: ";
		string r="Remaining card: ";
		while(count!=0){
			discard=discard + to_string(q.front()) +", ";
			q.pop();
			int k=q.front();
			q.pop();
			q.push(k);
			count--;
		}
		discard.resize(discard.size()-2);
		printf("%s\n",discard.c_str());
		printf("%s%d\n",r.c_str(),q.front());
	}

	}

}