#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int a,b;
    cin >> a >> b;

    int t = 60 * a + b - 45;
    if (t < 0)
        t += 24*60;

    cout << t/60 << " " << t%60 << endl;

}
