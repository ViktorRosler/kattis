#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int h,v;
    cin >> h >> v;

    cout << ceil(h/sin(v*3.14159265359 / 180.0)) << endl;
}
