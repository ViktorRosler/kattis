#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, tmp;
    double top = 0, bot = 0;

    cin >> n;
    for (int i{0}; i<n; ++i) {
        cin >> tmp;
        if (tmp != -1) {
            top += tmp;
            ++bot;
        }
    }

    cout << fixed << setprecision(16) << top/bot << endl;
}
