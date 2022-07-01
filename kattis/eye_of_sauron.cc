#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    cin >> s;

    int cnt = 0;
    for (int i{0}; i<s.length(); ++i) {
        if(s[i] == '|')
            cnt += 1;

        if (s[i] == '(')
            break;
    }

    cout << ((cnt+1)*2 == s.length() ? "correct" : "fix") << endl;

}
