#include <bits/stdc++.h>

using namespace std;


int main() {
    int lines, vol = 7;
    cin >> lines;

    string s;
    getline(cin, s);
    for (int i{0}; i<lines; ++i) {
        getline(cin, s);
        if (s[5] == 'o') {
            vol = min(10, vol+1);
        } else {
            vol = max(0, vol-1);
        }
    }

    cout << vol << endl;
}