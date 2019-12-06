#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    string s;
    cin>>s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> m;
    for (int i = 0; i < alphabet.length(); i++) {
        m[alphabet[i]] = i;
    }

    char letter = 'a';
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        int num_letter = m[letter];
        int next_letter = s[i];
        int num_next_letter = m[next_letter];
        ans += min(abs(num_next_letter - num_letter), (26 - abs(num_next_letter - num_letter)));
        letter = next_letter;
    }

    cout<<ans<<endl;
}

