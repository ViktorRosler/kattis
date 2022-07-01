#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, i = 1, cnt = 0;
    cin >> n;
    while (true) {
        n -= i*i;
        if (n>=0) {
            ++cnt;
            i += 2;
        } else {
            break;
        }
    }
    cout << cnt << endl;

}
