#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin>>s;
    set<char> st;
    for (int i = 0 ; i < s.length(); i++) {
        st.insert(s[i]);
    }

    int unique_length = st.size();
    if (unique_length % 2 == 1) {
        cout<<"IGNORE HIM!"<<endl;
    } else {
        cout<<"CHAT WITH HER!"<<endl;
    }
}

