#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int A, I;
    cin >> A >> I;

    for (double i{1}; i<10000; ++i) {
        if (ceil(i / A) == I) {
            cout << i << endl;
            break;
        }
    }

}
