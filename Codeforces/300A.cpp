#include <iostream>
#include <vector>
using namespace std;

/**
 * get count of negative numbers. If even make sure 1 negative goes into the set where product is zero. If odd put 1 number into negative set and only zero in zero set. Put the rest in positive set.
 * Always put 1 negative number in negative set.
 */
int main() {
    int n,k;
    cin>>n;
    vector<int> positives;
    vector<int> negatives;

    vector<int> set1;
    vector<int> set3;
    set3.push_back(0);

    for (int i = 0; i < n; i++) {
        cin>>k;
        if (k < 0) negatives.push_back(k);
        else if (k > 0) positives.push_back(k);
    }
    if (negatives.size() > 0) {
        set1.push_back(negatives.back());
        negatives.pop_back();
    }

    if (negatives.size() % 2 == 1 && negatives.size() > 0) {
        set3.push_back(negatives.back());
        negatives.pop_back();
    }
    positives.insert(positives.end(), negatives.begin(), negatives.end());

    cout<<set1.size();
    for (int i = 0; i < set1.size(); i++) {
        cout<<" "<<set1.at(i);
    }
    cout<<endl;
    cout<<positives.size();
    for (int i = 0; i < positives.size(); i++) {
        cout<<" "<<positives.at(i);
    }
    cout<<endl;
    cout<<set3.size();
    for (int i = 0 ; i < set3.size(); i++) {
        cout<<" "<<set3.at(i);
    }
    cout<<endl;
}
