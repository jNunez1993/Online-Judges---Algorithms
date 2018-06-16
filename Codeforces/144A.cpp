#include <iostream>
#define INF 1e9
#define nINF -1e9
using namespace std;


int main() {
    int n, height;
    cin>>n;
    int min = INF;
    int max = nINF;
    int min_pos = 0;
    int max_pos = 0;
    for (int i = 0; i < n; i++) {
        cin>>height;
        if (height > max) {
            max = height;
            max_pos = i; 
        }

        if (height <= min) {
            min = height;
            min_pos = i;
        }
    }

    int res = max_pos + (n-1-min_pos);
    if (max_pos > min_pos) res--;

    cout<<res<<endl;

}
