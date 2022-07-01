#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string line;
    cin >> line;

    int n = 1;
    for (int i{0}; i<line.length(); ++i) {
        line[i] == 'A' ? (n == 3 ? n = 3 : n == 2 ? n = 1 : n = 2) : (line[i] == 'B' ? (n == 1 ? n = 1 : n == 2 ? n = 3 : n = 2) : (n == 2 ? n = 2 : n == 1 ? n = 3 : n = 1));
    }
    cout << n << endl;
}

