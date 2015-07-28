#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;
vector<int> v;
vector<int> hit;



void build(int a){
	int steps=0;
	for(int i=a;i<200000;i*=2){
		v[i]+=steps;
		steps++;
		hit[i]++;
	}
	steps=0;
	int odd=-1;
	int memo=-1;
	int ran=false;
	for(int i=a;i>0;i/=2){
		v[i]+=steps;
		steps++;
		hit[i]++;
		if(i%2==1 && i>1){
			odd=i/2; 
			ran=true; 
			memo=steps;
			for(int i=odd*2;i<200000;i*=2){
				memo++;
				v[i]+=memo; 
				hit[i]++;
			}
		}
	}
	hit[a]-=1;
	
}




int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	
	v.resize(200005);
	fill(v.begin(),v.end(),0);
	hit.resize(200005);
	fill(hit.begin(),hit.end(),0);

	for(int i=0;i<n;i++){
		build(a[i]);
	}
	int min=INF;
	for(int i=1;i<=200000;i++){
		if(hit[i]==n)min=std::min(min,v[i]);
	}
	
	cout<<min<<endl;

}