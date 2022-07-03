#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int R,C;
    cin >> R >> C;

    string s;
    vector<string> grid;
    for (int i{0}; i<R; ++i) {
        cin >> s;
        grid.push_back(s);
    }

    int arr[5] = {0,0,0,0,0};

    for (int i{0}; i<R-1; ++i) {
        for (int j{0}; j<C-1; ++j) {
            int cnt = 0;
            
            if (grid[i][j] == '#' || grid[i][j+1] == '#' || grid[i+1][j] == '#' || grid[i+1][j+1] == '#')
                continue;

            if (grid[i][j] == 'X')
                ++cnt;

            if (grid[i][j+1] == 'X')
                ++cnt;

            if (grid[i+1][j] == 'X')
                ++cnt;

            if (grid[i+1][j+1] == 'X')
                ++cnt;

            ++arr[cnt];
        }
    }

    cout << arr[0] << '\n' << arr[1] << '\n' << arr[2] << '\n' << arr[3] << '\n' << arr[4] << endl; 

}
