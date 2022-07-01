#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string line;
    getline(cin, line);

    string s = "";
    for (int i{0}; i<line.length(); ++i) {
        if (line[i] == ':' || line[i] == ';')
            s = line[i];
        else if (line[i] == '-') {
            if (s.length() == 1)
                s += line[i];
            else
                s = "";
        } else if (line[i] == ')') {
             if (s.length() > 0) 
                cout << i - s.length() << endl;
            s = "";       
        } else {
            s = "";
        }
    }
}
