#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int n, m, c;
    while (cin>>n>>m>>c) {
        if (n == 0 && m == 0 && c == 0) break;
        int w = 0;
        for (int i = n; i >= 8; i--) {
            if (c==1) {
                w += m/2 - 3;
            } else {
                w += ceil((double)m/2) - 4;
            }

            c = 1 - c;
        }

        cout<<w<<endl;
    }
}
