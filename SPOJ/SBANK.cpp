#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 2147483647
using namespace std;


string toString(unsigned long long n){
	stringstream ss;
	ss<<n;
	return ss.str();
}


unsigned long long toNum(string s){
	unsigned long long n;
	stringstream (s)>>n;
	return n;
}

string* format(vector<pair<unsigned long long, unsigned long long> > accs){
	vector<pair<string,string> > vec;
	string *sols = new string[accs.size()];
	int idx=0;
	for(int i=0;i<accs.size();i++){
		vec.push_back(make_pair(toString(accs[i].first),toString(accs[i].second)));
		while(vec[i].first.length()!=10){
			vec[i].first=string()+'0'+vec[i].first;
		}
		while(vec[i].second.length()!=16){
			vec[i].second=string()+'0'+vec[i].second;
		}
		sols[idx]=vec[i].first+vec[i].second;
		sols[idx].insert(2,1,' ');
		sols[idx].insert(11,1,' ');
		sols[idx].insert(16,1,' ');
		sols[idx].insert(21,1,' ');
		sols[idx].insert(26,1,' ');
		idx++;
	}
	return sols;
}

int main(){
	int t,n;
	string k;
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<unsigned long long, unsigned long long > > accs;
		for(int i=0;i<n;i++){
			getline(cin>>ws,k);
			k.erase(remove_if(k.begin(), k.end(), ::isspace), k.end());
			long long first=toNum(k.substr(0,10));
			long long second=toNum(k.substr(10));
			accs.push_back(make_pair(first,second));
		}

		sort(accs.begin(),accs.end());
		string *sols=format(accs);
		int cnt=1;
		for(int i=0;i<accs.size()-1;i++){
			if(sols[i]==sols[i+1])cnt++;
			else{
				cout<<sols[i]<<' '<<cnt<<endl;
				cnt=1;
			}
		}
		cout<<sols[accs.size()-1]<<' '<<cnt<<endl;
		cout<<endl;
	}
}