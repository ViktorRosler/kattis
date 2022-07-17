#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,t;
    cin >> n >> t;

    vector<int> problems;
    int a,b,c,d;
    if (d > t) {
        cout << 0 << " " << 0 << endl;
    } else {
        int last = d;
        problems.push_back(d);
        for (int i{1}; i<n; ++i) {
            int s = ((a*last + b) % c) + 1;
            problems.push_back(s);
            last = s;
        }

        int cnt = 0; 
        long long time = 0;
        sort(problems.begin(), problems.end());
        for (int i{0}; i<problems.size(); ++i) {
            if (time + problems[i] > t)
                break;
            time += problems[i];
            ++cnt;
        }
    }




}

/*
2 2 2 2

t0 = 2
t1 = ((A*t0 + B) % C) + 1 = ((2*2 + 2) % 2) + 1 = 1
t2 = 


*/