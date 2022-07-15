#include <bits/stdc++.h>

using namespace std;

int big = 999999999;

int main() {
    int n, h, l;
    cin >> n >> h >> l;

    vector<int> horror_list;
    vector<int> horror_index(n+1, big);
    int tmp, tmp2;
    for (int i{0}; i<h; ++i) {
        cin >> tmp;
        horror_list.push_back(tmp);
        horror_index[tmp] = 0;
    }

    vector<pair<int,int>> similar;
    for(int i{0}; i<l; ++i) {
        cin >> tmp >> tmp2;
        similar.push_back(make_pair(tmp, tmp2));
    }

    set<int> done;
    while (horror_list.size() > 0) {
        int a = horror_list.back();
        horror_list.pop_back();
        done.insert(a);

        int b;
        for (int j{0}; j<similar.size(); ++j) {
            if (similar[j].first == a && done.find(similar[j].second) == done.end()) {
                b = similar[j].second;
            } else if (similar[j].second == a && done.find(similar[j].first) == done.end()) {
                b = similar[j].first;
            } else {
                continue;
            }

            horror_index[b] = min(horror_index[b], horror_index[a]+1);
            horror_list.insert(horror_list.begin(), b);
        }
    }

    int index = 0;
    int result = horror_index[0];
    for (int i{0}; i<n; ++i) {
        if (horror_index[i] > result) {
            result = horror_index[i];
            index = i;
        }
    }

    cout << index << endl;
    
}