#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    int l, r;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin>>l>>r;
        sum += r - l + 1;
    }

    int upper = k;

    while (upper <= sum) {
        if (upper != sum)
            upper += k;
        else break;
    }

    cout<<upper-sum<<endl;

}
