#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ifstream cin("test_cases/flourtanten.txt");

    int n, s;
    cin >> n;

    vector<int> v;
    for (int i{0}; i<n; ++i) {
        cin >> s;
        if (s != 0)
            v.push_back(s);
    }

    vector<long long> left(n, 0), right(n, 0);
    left[0] = 0;
    right[n-1] = 0;
    for (int i{1}; i<left.size(); ++i) {
        left[i] = v[i-1] * i + left[i-1];
    }

    for (int i{(int)right.size() - 2}; i>=0; --i) {
        
        right[i] = v[i] * (i+2) + right[i+1];
    }

    long long result = LLONG_MIN;
    for (int i{0}; i<n; ++i) {
        result = max(result, left[i] + right[i]);
    }
    
    cout << result << endl;
}

/*
     1  0 -2

     0  1 -3
    -4 -6  0

*/