#include <bits/stdc++.h>

using namespace std;

int main() {
    int cas = 1;
    int a,b,c,d;
    string empty;
    while (cin >> a >> b >> c >> d) {
        cout << "Case " << cas++ << ":" << endl;
        int delim = a*d - b*c;
        cout << d / delim << " " << -(b / delim) << endl;
        cout << -(c / delim) << " " << a / delim << endl;
    }
}