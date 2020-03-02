#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    string ineq;
    pair<int, char> m[3] = {{0, 'A'}, {0, 'B'}, {0, 'C'}};

    for (int i = 0; i < 3; i++) {
        cin>>ineq;
        char bigger = ineq[1] == '>' ? ineq[0] : ineq[2];
        int idx = bigger - 'A';
        m[idx].first++;
    }

    sort(m, m+3);

    if (m[2].first != 2) {
        cout<<"Impossible"<<endl;
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        cout<<m[i].second;
    }
}
