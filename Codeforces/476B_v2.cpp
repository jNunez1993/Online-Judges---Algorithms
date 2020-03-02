#include <iostream>
#include <map>
#include <math.h>
#include <iomanip>
#include <bitset>
using namespace std;

int main() {
    string s1, s2;
    cin>>s1>>s2;
    int s1_sum = 0;
    int s2_sum = 0;
    int qmarks = 0;
    cout<<fixed<<setprecision(10);
    map<char, int> v;
    v['+'] = 1; v['-'] = -1;
    for (int i = 0; i < s1.length(); i++) {
        s1_sum += v[s1[i]];
        if (s2[i] != '?') s2_sum += v[s2[i]];
        else qmarks++;
    }

    if (qmarks == 0 && s1_sum != s2_sum) cout<<(double)0<<endl;
    else if (qmarks == 0 && s1_sum == s2_sum) cout<<(double)1<<endl;
    else if(abs(s1_sum - s2_sum) > qmarks) cout<<(double)0<<endl;
    else {
        int total = (1<<qmarks) - 1;
        int val = s1_sum - s2_sum;
        int num = 0;
        for (int i = 0; i <= total; i++) {
            string k = bitset<64>(i).to_string();
            int sum = 0;
            for (int j = 63; j > 63 - qmarks; j--) {
                if (k[j] == '1') sum++;
                else sum--;
            }
            if (sum == val) num++;
        }

        double ans = (double)num/(total+1);
        cout<<ans<<endl;
    }
}
