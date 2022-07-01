#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int i;
    cin >> i;

    string s = "";
    while (i != 0) {
        s = (i%2 == 0 ? '0' : '1') + s;
        i /= 2;
    }

    int n = 0;
    for (int i{0}; i<s.length(); ++i) {
        if (s[i] == '1') {
            n += pow(2, i);
        }
    }

    cout << n << endl;

}
