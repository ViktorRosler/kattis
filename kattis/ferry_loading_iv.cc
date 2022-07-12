#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int cases;
    cin >> cases;

    for (int i{0}; i<cases; ++i) {
        int l, m;
        cin >> l >> m;

        vector<int> left, right;
        for (int j{0}; j<m; ++j) {
            int tmp;
            string s;
            cin >> tmp >> s;

            if (s == "left") {
                left.push_back(tmp);
            } else {
                right.push_back(tmp);
            }
        }

        bool is_left = true;
        int l_index = 0, r_index = 0, cnt = 0;
        while (l_index < left.size() || r_index < right.size()) {
            int tmp = 0;
            if (is_left) {
                while (l_index < left.size() && tmp + left[l_index] < l * 100) {
                    tmp += left[l_index++];
                }
            } else {
                while (r_index < right.size() && tmp + right[r_index] < l * 100) {
                    tmp += right[r_index++];
                }
            }
            ++cnt;
            is_left = !is_left;
        }
        cout << cnt << endl;
    }


}
