#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
#include <map>
using namespace std;

bool isReachable(double x1, double y1, double x2, double y2, double d) {
    double eucledian_d = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
    return eucledian_d <= d;
}

int main() {
    int n, m ,x, q;
    cin>>n>>m>>x;
    char a[n][m];
    map<char, bool> letters;
    map<char, vector<pair<int, int> > > pos;
    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
            if (a[i][j] == 'S') v.push_back(make_pair(i, j));
            else {
                letters[a[i][j]] = true;
                pos[a[i][j]].push_back(make_pair(i, j));
            }
        }

    cin>>q;
    string s;
    cin>>s;
    map<char, bool> cache;
    int ans = 0;
    for (int i = 0; i < q; i++) {
        char letter = s[i];
        if (!letters[letter] && !letters[tolower(letter)]) {
            cout<<-1<<endl;
            return 0;
        }

        if (!letters[letter] && letters[tolower(letter)] && v.size() == 0) {
            cout<<-1<<endl;
            return 0;
        }

        if (cache.find(letter) != cache.end()) {
            if (!cache[letter]) ans++;
            continue;
        }

        if (!letters[letter] && letters[tolower(letter)] && v.size() > 0) {
            vector<pair<int, int> > letter_pos = pos[tolower(letter)];
            bool canReach = false;
            for (int j = 0; j < letter_pos.size() && !canReach; j++) {
                for (int k = 0; k < v.size(); k++) {
                    if (isReachable((double)letter_pos[j].first+.5, (double)letter_pos[j].second+.5, (double)v[k].first + .5, (double)v[k].second + .5, (double)x)) {
                        canReach = true;
                        break;
                    }
                }
            }

            if (!canReach) ans++;
            cache[letter] = canReach;
        }
    }
    cout<<ans<<endl;
}
