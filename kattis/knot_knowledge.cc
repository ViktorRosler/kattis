#include <bits/stdc++.h>

using namespace std;

int main() {
    int vals;
    cin >> vals;

    set<int> knots;
    int tmp;
    for (int i{0}; i<vals; ++i) {
        cin >> tmp;
        knots.insert(tmp);
    }

    set<int> learned;
    for (int i{1}; i<vals; ++i) {
        cin >> tmp;
        learned.insert(tmp);
    }

    for (auto iter = knots.begin(); iter != knots.end(); ++iter) {
        if (learned.find(*iter) == learned.end())
            cout << *iter << endl;
    }
    
}