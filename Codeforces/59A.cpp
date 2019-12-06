#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin>>s;

    string upper = s;
    string lower = s;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

    int upperc = 0;
    int lowerc = 0;
    for (int i = 0; i < s.length(); i++) {
        if (upper[i] == s[i]) upperc++;
        else lowerc++;
    }

    if (upperc > lowerc) cout<<upper<<endl;
    else cout<<lower<<endl;
}

