#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

class Edge{
public:
	int u;
	int v;
	int w;
	Edge(int u,int v,int w){
		this->u=u;
		this->v=v;
		this->w=w;
	}
	bool operator<(Edge &other){
		return this->w<other.w;
	}
	bool operator>(Edge &other){
		return this->w>other.w;
	}
	bool operator>=(Edge &other){
		return this->w>=other.w;
	}
	bool operator <=(Edge &other){
		return this->w<=other.w;
	}
};

template <typename T>
void bubble_sort(T *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){ //since the max element bubbles up, 
			if(a[j]>a[j+1])					//no reason to process it again
				std::swap(a[j],a[j+1]);
		}
	}
}


int main(){
	/*
	int a[]={6,7,5,4};
	bubble_sort(a,sizeof(a)/sizeof(a[0]));
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		cout<<a[i]<<endl;
	}
	*/
	Edge one(1,1,6);
	Edge two(1,1,7);
	Edge three(1,1,5);
	Edge four(1,1,4);
	Edge arr[]={one,two,three,four};
	bubble_sort(arr,4);
	for(int i=0;i<4;i++){
		cout<<arr[i].w<<endl;
	}
}
