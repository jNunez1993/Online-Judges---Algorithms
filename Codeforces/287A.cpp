#include <iostream>
using namespace std;

int main() {
    string s[4];
    for (int i = 0; i < 4; i++) {
        cin>>s[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int w = 0;
            int b = 0;
            char colors[4]= {s[i][j], s[i+1][j], s[i][j+1], s[i+1][j+1]};
            for (int k = 0; k < 4; k++) {
                if (colors[k] == '#') b++;
                else w++;
            }

            if (w >= 3 || b >= 3) {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

    cout<<"NO"<<endl;
}
