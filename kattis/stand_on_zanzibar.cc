#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int cases;
    cin >> cases;

    for (int i{0}; i<cases; ++i) {
        int n, m = 1, s = 0;
        cin >> n;

        while (cin >> n) {
            if (n == 0)
                break;
            if (n > m*2)
                s += n - m*2;
            m = n;
        }

        cout << s << endl;
    }
}
