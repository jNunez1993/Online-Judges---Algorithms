#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 1e9
using namespace std;
#define DEBUG(x)cout<<x<<endl;
int n,size,input;
deque<int> k1;
deque<int> k2;

int main(){
	cin>>n;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>input;
		k1.push_back(input);
	}
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>input;
		k2.push_back(input);
	}
	int fights=0;
	while(!k1.empty() && !k2.empty() && fights<1e6){
		int t1=k1.front();k1.pop_front();
		int t2=k2.front();k2.pop_front();
		if(t1>t2){
			k1.push_back(t2);
			k1.push_back(t1);
		}
		else{
			k2.push_back(t1);
			k2.push_back(t2);
		}
		fights++;
	}

	if(fights>=1e6)cout<<-1<<endl;
	else{
		printf("%d %d\n",fights,k1.size()==0? 2:1);
	}

}