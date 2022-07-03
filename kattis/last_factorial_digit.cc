#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int cases;
    cin >> cases;

    vector<int> v = {0,1,2,6,4,0,0,0,0,0,0};

    int s;
    for (int i{0}; i<cases; ++i) {
        cin >> s;
        cout << v[s] << endl;
    }

}

/*
    1| 1
    2| 2
    3| 6
    4| 24
    5| 120
    6| 720
    7| 5040
    8| 40320
    9| 362880
   10| 3628800
*/