#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int x1, x2, x3, y1, y2, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (x1 == x2) 
        x1 = x3;
    else if (x1 == x3) 
        x1 = x2;

    if (y1 == y2)
        y1 = y3;
    else if (y1 == y3)
        y1 = y2;

    cout << x1 << " " << y1 << endl;

}
