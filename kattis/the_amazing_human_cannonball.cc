#include <bits/stdc++.h>

using namespace std;

double pi = 3.14159265359;

int main() 
{
    int cases;
    cin >> cases;

    for (int i{0}; i<cases; ++i) {
        double v, o, x, h1, h2;
        cin >> v >> o >> x >> h1 >> h2;

        double t = (x / v) / cos(pi * o / 180.0);
        double y = v * t * sin(pi * o / 180.0) - 0.5 * 9.81 * t * t;

        if (h1+1 <= y && y <= h2-1)
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;
    }
}
