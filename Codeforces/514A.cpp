#include <iostream>
#include <vector>
using namespace std;

vector<int> toArr(long long n) {
    vector<int> v;
    while (n != 0) {
        v.insert(v.begin(), n%10);
        n /= 10;
    }

    return v;
}

int main() {
    long long n;
    cin>>n;
    vector<int> v = toArr(n);
    for (int i = 0; i < v.size(); i++) {
        if (!(i == 0 && v[i] == 9)) {
            int inv = 9 - v[i];
            if (inv < v[i]) {
                v[i] = inv;
            }
        }
        cout<<v[i];
    }
}
