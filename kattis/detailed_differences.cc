#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int cases;
    cin >> cases;

    for (int i{0}; i<cases; ++i) {
        string line1, line2, out = "";
        cin >> line1 >> line2;

        for (int j{0}; j<line1.length(); ++j) {
            if (line1[j] == line2[j])
                out += '.';
            else
                out += '*';
        }

        cout << line1 << endl << line2 << endl << out << endl << endl;
        
    }
}
