#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
vector<string> context;
vector<string> morse;
map<char, string> table;
map<string, string> wordToMorse;
map<string, vector<string> > morseToWord;
string toMorse(string);
void solve();
int distanceFromMorse(string, string);

int main() {
    char letter;
    string m;
    while (cin>>letter) {
        if (letter == '*') break;
        cin>>m;
        table[letter] = m;
    }
    string word;
    while (cin>>word) {
        if (word == "*") break;
        context.push_back(word);
        string morseRep = toMorse(word);
        wordToMorse[word] = morseRep;
        vector<string> words = morseToWord[morseRep];
        words.push_back(word);
        morseToWord[morseRep] = words;
    }
    string line;
    while (getline(cin>>ws,line)) {
        if (line == "*") break;
        istringstream iss(line);
        for (string s; iss>>s;) {
            morse.push_back(s);
        }
    }
    solve();
}


void solve() {
    for (int i = 0; i < morse.size(); i++) {
        string m = morse[i];
        if (morseToWord.find(m) != morseToWord.end()) {
            vector<string> words = morseToWord[m];
            if (words.size() == 1) {
                cout<<words[0]<<endl;
            } else {
                cout<<words[0] +"!"<<endl;
            }
        } else {
            int minDist = 1e9;
            string bestWord = "";
            for (int i = 0; i < context.size(); i++) {
               int dist = distanceFromMorse(m, wordToMorse[context[i]]);
               if (dist < minDist) {
                    bestWord = context[i];
                    minDist = dist;
               }
            }

            cout<<bestWord+"?"<<endl;
        }

    }
}

string toMorse(string word) {
    string rep = "";
    for (int i = 0; i < word.length(); i++) {
        rep += table[word[i]];
    }
    return rep;
}

int distanceFromMorse(string m, string wordMorseRep) {
    int dist = 1e9;
    string longer, shorter;
    longer = m.length() >= wordMorseRep.length() ? m : wordMorseRep;
    shorter = m.length() < wordMorseRep.length() ? m : wordMorseRep;
    if (longer.substr(0, shorter.length()) == shorter) {
        return longer.length() - shorter.length();
    }
    return 1e9;
}
