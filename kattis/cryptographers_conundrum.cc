#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i{0}; i<s.length(); ++i) {
        if (i%3 == 0) {
            if (s[i] != 'P')
                ++cnt;
        } else if (i%3 == 1) {
            if (s[i] != 'E')
                ++cnt;
        } else {
            if (s[i] != 'R')
                ++cnt;

        }
    }

    cout << cnt << endl;
}
