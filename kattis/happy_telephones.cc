#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int nr_of_calls, nr_of_intervals;
    while (true) {
        cin >> nr_of_calls >> nr_of_intervals;
        if (nr_of_calls == 0 && nr_of_intervals == 0)
            break;

        vector<pair<int,int>> vec;
        int a,b,c,d;
        for (int i{0}; i<nr_of_calls; ++i) {
            cin >> a >> b >> c >> d;
            vec.push_back(make_pair(c, c+d));
        }

        for (int i{0}; i<nr_of_intervals; ++i) {
            cin >> a >> b;
            c = 0;
            for (int j{0}; j<nr_of_calls; ++j) {
                if (a+b > vec[j].first && a < vec[j].second) {
                    // cout << "a: " << a << " b: " << b << " first: " << vec[j].first << " second: " << vec[j].second << endl;
                    ++c;
                }
                    
            }
            cout << c << endl;
        }
    }
}

/*
    34567
    12345678910
    6789

*/
