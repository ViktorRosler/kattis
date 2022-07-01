#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int cases;
    cin >> cases;

    double b,p;
    for (int i{0}; i<cases; ++i) {
        cin >> b >> p;
        double a = (60 * b) / p;
        cout << fixed << setprecision(4) << a - (a/b) << " " << a << " " << a + (a/b) << endl;
    }
}
