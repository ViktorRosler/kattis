#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/the_rectangles_are_surrounding_us.txt");

    int n;
    while (true) {
        cin >> n;

        if (n == 0)
            break;

        int x1, y1, x2, y2;
        int squares[501][501];
        for (int i{0}; i<501; ++i)
            for (int j{0}; j<501; ++j)
                squares[i][j] = 0;
        for (int i{0}; i<n; ++i) {
            cin >> x1 >> y1 >> x2 >> y2;

            for (int j{x1}; j<x2; ++j) {
                for (int k{y1}; k<y2; ++k) {
                    squares[j][k] = 1;
                }
            }
        }

        int cnt = 0;
        for (int i{0}; i<501; ++i)
            for (int j{0}; j<501; ++j)
                cnt += squares[i][j];

        cout << cnt << endl;

    }

}
