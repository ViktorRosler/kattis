#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,q;
    cin >> n >> q;

    map<int,int> locations; 

    for (int i{1}; i<=n; ++i) {
        int tmp;
        cin >> tmp;
        locations.insert(make_pair(i, tmp));
    }

    for (int i{0}; i<q; ++i) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a == 1) {
            locations[b] = c;
        } else {
            cout << abs(locations[b] - locations[c]) << endl;
        }
    }
}
