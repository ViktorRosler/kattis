#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int a, b = 0, c;
    cin >> c;

    for (int i{1}; i<=c; ++i) {
        cin >> a >> a;
        cout << i << " " << a + (a*(a+1)/2) << endl;
    }

}


/*
    1 = 1 + (1*2) / 2 = 2
    2 = 2 + (2*3) / 2 = 5
    3 = 3 + (3*4) / 2 = 9
    4 = 4 + (4*5) / 2 = 14
    5 ...
    6
    7
    8

    **
    ***
    ****
    *****
    ******
    *******
    ********
*/