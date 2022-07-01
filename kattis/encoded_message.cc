#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int cases;
    cin >> cases;

    string line;
    for (int i{0}; i<cases; ++i) {
        cin >> line;
        int n = sqrt(line.length());

        string s = "";

        for (int col{n-1}; col>=0; --col) {
            for (int row{0}; row<n; ++row) {
                cout << line[col + row * n];
            }
        }
        cout << endl;
    }

    


}


/*

    4 9 14 19 24
    3 8 13 18 23
    2 7 12 17 22
    1 6 11 16 21
    0 5 10 15 20 

*/