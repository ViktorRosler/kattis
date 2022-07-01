#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string line;
    cin >> line;

    int T = 0, C = 0, G = 0;
    for (int i{0}; i<line.length(); ++i)
        line[i] == 'T' ? (++T) : (line[i] == 'C' ? (++C) : (++G));

    cout << T*T + C*C + G*G + 7 * (T < C ? (T < G ? (T) : (G)) : (C < G ? (C) : (G))) << endl;
}
