#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    int cnt = 0;
    int before_sum[n];
    int after_sum[n];
    std::fill(before_sum, before_sum + n, 0);
    std::fill(after_sum, after_sum + n, 0);
    if (s[0] == 'Q') before_sum[0] = 1;
    if (s[n-1] == 'Q') after_sum[n-1] = 1;
    for (int i = 1; i < n;i++) {
        if (s[i] == 'Q') before_sum[i] = before_sum[i-1]+1;
        else before_sum[i] = before_sum[i-1];
    }
    for (int i = n-2; i >= 0;i--) {
        if (s[i] == 'Q') after_sum[i] = after_sum[i+1]+1;
        else after_sum[i] = after_sum[i+1];
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            cnt+= (before_sum[i] * after_sum[i]);
        }
    }
    cout<<cnt<<endl;
}
