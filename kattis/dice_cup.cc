#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,m;

    cin >> n >> m;

    vector<int> a(50, 0);
    int highest = 0;
    for (int i{1}; i<=n; ++i) {
        for (int j{1}; j<=m; ++j) {
            a[i+j] += 1;
            highest = max(highest, a[i+j]);
        }
    }

    for (int i{1}; i<50; ++i) {
        if (a[i] == highest)
            cout << i << endl;
    }

}
