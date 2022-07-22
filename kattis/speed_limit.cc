#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    while (cin >> t) {
        if (t == -1)
            break;

        int a, b, cnt = 0, s = 0;
        for (int i{0}; i<t; ++i) {
            cin >> a >> b;
            cnt += a * (b-s);
            s = b;
        }

        cout << cnt << " miles" << endl;
    }

}