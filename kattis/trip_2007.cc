#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    while (true) {
        cin >> n;

        if (n == 0)
            break;

        vector<int> values(10001, 0);
        int tmp, m = 0, v;
        for (int i{0}; i<n; ++i) {
            cin >> tmp;
            if (++values[tmp] > m) {
                m = values[tmp];
                v = tmp;
            }
        }

        cout << m << endl;
        for (int i{0}; i<m; ++i) {
            cout << v;
            for (int j{0}; j<values.size(); ++j) {
                if (j == v || values[j] == 0)
                    continue;

                cout << " " << j;
                --values[j];
            }
            cout << endl;
        }



    }

}
