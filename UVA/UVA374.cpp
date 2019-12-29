#include <iostream>
#include <vector>
using namespace std;

long long pow(int b, int p, int m) {
    if (p == 0) return 1;
    long long num = pow(b, p/2, m);
    long long ans = p % 2 == 1 ? (num%m * num%m * b%m)%m : (num%m * num%m)%m;
    return ans;
}

int main() {
    int b, p, m;
    vector<long long> sols;
    while (cin>>b>>p>>m) {
        sols.push_back(pow(b, p, m));
    }

    for (int i = 0; i < sols.size(); i++) {
        cout<<sols[i]<<endl;
    }
}
