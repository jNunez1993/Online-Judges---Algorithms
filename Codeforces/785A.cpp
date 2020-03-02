#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> m;
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;

    int n;
    int ans = 0;
    cin>>n;
    string s;
    while (n--) {
        cin>>s;
        ans += m[s];
    }
    cout<<ans<<endl;
}
