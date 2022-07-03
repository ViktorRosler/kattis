#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string line;
    cin >> line;

    bool found = false;
    for (int i{0}; i<line.length()-1; ++i) {
        if (line[i] == 's' && line[i+1] == 's') {
            cout << "hiss" << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "no hiss" << endl;
}
