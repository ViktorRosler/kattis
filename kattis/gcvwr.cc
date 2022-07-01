#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int g,t,n;
    cin >> g >> t >> n;

    int a = 0, b;
    for (int i{0}; i<n; ++i) {
        cin >> b;
        a += b;
    }

    cout << ((int) ((g-t)*0.9)) - a << endl;
}
