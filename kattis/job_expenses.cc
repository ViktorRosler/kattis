#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    long long result = 0;
    int tmp;
    for (int i{0}; i<n; ++i) {
        cin >> tmp;
        if (tmp < 0)
            result += tmp;
    }

    cout << abs(result) << endl;
}
