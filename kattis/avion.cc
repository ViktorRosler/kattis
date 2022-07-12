#include <bits/stdc++.h>

using namespace std;

int main() 
{
    bool first = true;

    for (int i{0}; i<5; ++i) {
        string s;
        cin >> s;
        for (int j{0}; j<s.length() -2; ++j) {
            if (s[j] == 'F' && s[j+1] == 'B' && s[j+2] == 'I') {
                if (!first)
                    cout << " ";
                cout << i+1;
                first = false;  
            }              
        }
    }

    if (first)
        cout << "HE GOT AWAY!";
    cout << endl;
}
