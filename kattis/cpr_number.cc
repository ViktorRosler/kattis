#include <bits/stdc++.h>

using namespace std;

int main() {

    int num = 0;
    string s;
    cin >> s;

    for (int i{0}; i<=10; ++i) {
        if (i == 0 || i == 7)
            num += 4 * (s[i] - '0');
        if (i == 1 || i == 8)
            num += 3 * (s[i] - '0');
        if (i == 2 ||i == 9)
            num += 2 * (s[i] - '0');
        if (i == 3)
            num += 7 * (s[i] - '0');
        if (i == 4)
            num += 6 * (s[i] - '0');
        if (i == 5)
            num += 5 * (s[i] - '0');
        if (i == 10)
            num += (s[i] - '0');
        cout << num << endl;
    }

    if (num % 11 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}