#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007

vector<int> calc_next(vector<int> sequence, int n, int m) {
    vector<int> next;
    long long val;
    for (int i{0}; i<= m; ++i) {
        if (i == 0)
            val = sequence[i];
        else
            val = sequence[i] + next[i-1];
        if (i >= n) {
            val = val - sequence[i-n] + mod;
        }
        next.push_back(val % mod);
    }
    return next;
}

int main() 
{
	ifstream cin("test_cases/zbrka.txt");

    int N, C;
    cin >> N >> C;

    vector<int> sequence(C+5, 0);
    sequence[0] = 1;

    for (int i{1}; i<=N; ++i)
        sequence = calc_next(sequence, i, C);
    
    cout << sequence[sequence.size() - 1] << endl;
}


/*

4 - - - -> 4 1 2 3 
- 4 - - -> 1 4 3 2, 2 4 1 3
- - 4 - -> 2 3 4 1, 3 1 4 2
- - - 4 -> 3 2 1 4

1
1 0 -> 1
1 1 -> 0

2
2 0 -> 1
2 1 -> 1
2 2 -> 0

6
3 0 -> 1
3 1 -> 2
3 2 -> 2
3 3 -> 1
3 4 -> 0

24
4 0 -> 1
4 1 -> 3
4 2 -> 5
4 3 -> 6
4 4 -> 5
4 5 -> 3 
4 6 -> 1
4 7 -> 0

1  0  0  0  0  0
1  1  0  0  0  0
1  2  2  1  0  0
1  3  5  6  5  3  1  0  0  0  0
1  4  9 15 20 22 20 15  9  4  1

*/