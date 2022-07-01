#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string name;
    cin >> name;

    char last = name[0];
    cout << last;
    for (int i{1}; i<name.length(); ++i) {
        if (name[i] != last)
            cout << name[i];
        last = name[i];
    }
    cout << endl;

}
