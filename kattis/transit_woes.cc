#include <bits/stdc++.h>

using namespace std;


int main() {
    int s,t,n;
    cin >> s >> t >> n;

    int time = s;
    vector<int> walks;
    vector<int> rides;
    vector<int> arrivals;

    int tmp;
    for (int i{0}; i<n+1; ++i) {
        cin >> tmp;
        walks.push_back(tmp);
    }

    for (int i{0}; i<n; ++i) {
        cin >> tmp;
        rides.push_back(tmp);
    }

    for (int i{0}; i<n; ++i) {
        cin >> tmp;
        arrivals.push_back(tmp);
    }

    time += walks[0];
    for (int i{0}; i<n; ++i) {
        tmp = 0;
        while (tmp < time) {
            tmp += arrivals[i];
        }
        time = arrivals[i] + walks[i+1];
    }

    if (time <= t)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

}