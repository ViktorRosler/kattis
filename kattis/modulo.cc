#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> v;
    int tmp;
    
    for (int i{0}; i<10; ++i) {
        cin >> tmp;
        v.insert(tmp % 42);
    }

    cout << v.size() << endl;
}