#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,p,s;
    cin >> n >> p >> s;

    for (int i{0}; i<s; ++i) {
        bool keep = false;
        int a,b;
        cin >> a;
        for (int j{0}; j<a; ++j) {
            cin >> b;
            if (b == p)
                keep = true;
        }

        if (keep)
            cout << "KEEP" << endl;
        else
            cout << "REMOVE" << endl;
    }
}