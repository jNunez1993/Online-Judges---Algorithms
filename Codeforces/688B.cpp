#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string left, right;
    cin>>left;
    right = left;
    reverse(right.begin(), right.end());
    cout<<left<<right<<endl;
}
