#include <iostream>
using namespace std;

int main () {
    int n;
    long long x;
    cin>>n>>x;
    char sign;
    long long magnitude;
    int kids = 0;
    for (int i = 0; i < n; i++) {
        cin>>sign>>magnitude;
        if (sign == '-') magnitude = -magnitude;
        if (x + magnitude < 0) kids++;
        else x += magnitude;
    }

    cout<<x<<" "<<kids<<endl;
}

