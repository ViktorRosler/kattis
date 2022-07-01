#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int cnt = 0, temp, temps;
    cin >> temps;
    for (int i{0}; i<temps; ++i) {
        cin >> temp;
        if (temp < 0)
            ++cnt;
    }
    cout << cnt << endl;

}
