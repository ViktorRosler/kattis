#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    cin >> s;
    bool go = false;
    for (int i{0}; i<s.length(); ++i) {
        if (s[i] == 'a')
            go = true;

        if (go)
            cout << s[i];
    }
    cout << endl;
}