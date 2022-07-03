#include <bits/stdc++.h>

using namespace std;

int main() 
{
    set<string> s;

    string word;
    bool done = false;
    while (cin >> word) {
        if (s.find(word) != s.end()) {
            cout << "no" << endl;
            done = true;
            break;
        }
        s.insert(word);
    }

    if (!done)
        cout << "yes" << endl;

}
