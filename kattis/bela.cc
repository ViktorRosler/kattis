#include <bits/stdc++.h>

using namespace std;

int main() 
{
    map<char, int> a;
    a['A'] = 11;
    a['K'] = 4;
    a['Q'] = 3;
    a['J'] = 20;
    a['T'] = 10;
    a['9'] = 14;
    a['8'] = 0;
    a['7'] = 0;

    map<char, int> b;
    b['A'] = 11;
    b['K'] = 4;
    b['Q'] = 3;
    b['J'] = 2;
    b['T'] = 10;
    b['9'] = 0;
    b['8'] = 0;
    b['7'] = 0;

    int N;
    char B;

    cin >> N >> B;
    string line;
    int score = 0;
    for (int i{0}; i<N*4; ++i) {
        cin >> line;
        if (line[1] == B)
            score += a[line[0]];
        else
            score += b[line[0]];
    }
    cout << score << endl;
}
