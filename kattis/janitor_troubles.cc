#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    double s = (a + b + c + d) / 2.0;

    cout << fixed << setprecision(15) << sqrt((s-a) * (s-b) * (s-c) * (s-d)) << endl;
}