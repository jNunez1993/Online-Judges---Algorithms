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

long long max(long long l, long long l1){
    return l>l1? l:l1;
}

int main(){
    int n,x;
    cin>>n;
    long long a[100002]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    long long dp[1000002];
    dp[0]=0;
    dp[1]=a[1];
    for(int i=2;i<=100002;i++){
        dp[i]=max(dp[i-1],dp[i-2]+a[i]*i);
    }
    cout<<dp[100002]<<endl;
}