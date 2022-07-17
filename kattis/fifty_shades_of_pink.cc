#include <bits/stdc++.h>

using namespace std;

int main() {
    int words;
    cin >> words;

    int cnt = 0;
    for (int i{0}; i<words; ++i) {
        string s;
        cin >> s;
        for (int j{0}; j<s.length() - 3; ++j) {
            if (tolower(s[j]) == 'p' && tolower(s[j+1]) == 'i' && tolower(s[j+2]) == 'n' && tolower(s[j+3]) == 'k') {
                ++cnt;
                break;
            }
            if (tolower(s[j]) == 'r' && tolower(s[j+1]) == 'o' && tolower(s[j+2]) == 's' && tolower(s[j+3]) == 'e') {
                ++cnt;
                break;
            }
        }
    }

    if (cnt)
        cout << cnt << endl;
    else    
        cout << "I must watch Star Wars with my daughter" << endl;
}