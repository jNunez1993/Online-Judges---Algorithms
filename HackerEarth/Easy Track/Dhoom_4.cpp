#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
vector<int> visited(100000);

struct key{
	long long val;
	long long t;
	key(long long val,long long t){
		this->val=val;
		this->t=t;
	}
};

int bfs(int k, int* keys,int n,int lk){
	long long minTime=INF;
	queue<key> q;
	key src(k,0);
	q.push(src);
	while(!q.empty()){
		key qkey=q.front();q.pop();
		for(int i=0;i<n;i++){
			long long value=(qkey.val*keys[i])%100000;
			if(visited[value]==0){
				if(value==lk)minTime=std::min(minTime,qkey.t+1);
				key newKey(value,qkey.t+1);
				q.push(newKey);
				visited[value]=1;
			}
		}
	}
	return minTime;
}

int main(){
	int k,lk,n;
	scanf("%d %d %d",&k,&lk,&n);
	int keys[n];
	for(int i=0;i<n;i++)scanf("%d",&keys[i]);
	int ans=bfs(k,keys,n,lk);
	if(ans==INF)printf("%d\n",-1);
	else printf("%d\n",ans);
}