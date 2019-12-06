#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

class DisjointSet {
    private:
        vector<int> v;
        vector<int> used;
        vector<int> rank;
    public:
        DisjointSet(int n) {
            v.resize(n);
            for (int i = 0; i < n; i++) {
                v[i] = i;
            }
            rank.resize(n);
            used.resize(n);
        }

        void unionSet(int i, int j) {
            int p1 = find(i);
            int p2 = find(j);
            used[p1] = 1;
            used[p2] = 1;

            if (p1 == p2) return;

            int p1rank = rank[i];
            int p2rank = rank[j];
            if (p1rank < p2rank) {
                v[p1] = p2;
            } else if (p1rank > p2rank) {
                v[p2] = p1;
            } else {
                v[p2] = p1;
                rank[p1]++;
            }
        }

        int find(int i) {
            if (v[i] == i) {
                return i;
            }
            return v[i] = find(v[i]);
        }

        int getNumSets() {
            set<int> s;
            int numSets = 0;
            for (int i = 0; i < v.size(); i++) {
                if (used[i] == 1) {
                    s.insert(find(v[i]));
                }
            }
            return s.size();
        }
};

int main() {
    int n;
    cin>>n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector<int> v[26];
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < alphabet.length(); i++) {
        char c = alphabet[i];
        for (int j = 0; j < n; j++) {
            if (a[j].find(c) != string::npos) {
                v[i].push_back(j);
            }
        }
    }

    DisjointSet* ds = new DisjointSet(n);

    for (int j = 0; j < 26; j++) {
        for (int k = 1; k < v[j].size(); k++) {
            ds->unionSet(v[j][0], v[j][k]);
        }
        if (v[j].size() == 1) {
            ds->unionSet(v[j][0], v[j][0]);
        }
    }

    cout<<ds->getNumSets()<<endl;
}
