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



int main(){
	int n;
	cin>>n;
	vector<int> v[n+1];
	int f,s;
	for(int i=0;i<n-1;i++){
		cin>>f>>s;
		v[f].push_back(s);
		v[s].push_back(f);
	}
	
	queue<int> q;
	q.push(1);
	bool visited[n+1]={0};
	visited[1]=true;
	int dist[n+1]={0};
	while(!q.empty()){                 //bfs
		int ele=q.front();
		q.pop();
		for(int j=0;j<v[ele].size();j++){
			int check=v[ele].at(j);
			if(!visited[check]){
				q.push(check);
				dist[check]=dist[ele]+1;
				visited[check]=true;
			}
		}
	}

	int max=dist[0];
	int farNode=0;
	for(int i=1;i<=n;i++){
		if(dist[i]>max){
			max=dist[i];
			farNode=i;
		}
	}
	for(int i=0;i<=n;i++){
		visited[i]=0;
		dist[i]=0;
	}


	//do bfs again
	q.push(farNode);
	visited[farNode]=true;
	while(!q.empty()){
		int ele=q.front();
		q.pop();
		for(int j=0;j<v[ele].size();j++){
			int check=v[ele].at(j);
			if(!visited[check]){
				q.push(check);
				dist[check]=dist[ele]+1;
				visited[check]=true;
			}
		}
	}

	max=dist[0];
		for(int i=1;i<=n;i++){
		if(dist[i]>max){
			max=dist[i];
		}
	}
	cout<<max<<endl;





}