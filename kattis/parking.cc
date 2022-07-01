#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int cases;
    cin >> cases;

    int n;
    for (int i{0}; i<cases; ++i) {
        cin >> n;

        int store, min_store = 999999, max_store = 0;
        for (int j{0}; j<n; ++j) {
            cin >> store;
            min_store = min(min_store, store);
            max_store = max(max_store, store);
        }

        cout << (max_store - min_store) * 2 << endl;
    }

}
