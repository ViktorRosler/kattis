#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/the_dragon_of_loowater.txt");

    int n,m;
    while (true) {
        cin >> n >> m;

        if (n == 0 && m == 0)
            break;

        vector<int> knights;
        vector<int> heads;

        int tmp;
        for (int i{0}; i<n; ++i) {
            cin >> tmp;
            heads.push_back(tmp);
        } 

        for (int i{0}; i<m; ++i) {
            cin >> tmp;
            knights.push_back(tmp);
        }   

        sort(knights.begin(), knights.end());
        sort(heads.begin(), heads.end());

        int payment = 0;
        int knight_index = 0;
        bool failed = false;
        for (int i{0}; i<heads.size(); ++i) {
            if (knight_index >= knights.size()) {
                failed = true;
                break;
            }

            while (knights[knight_index] < heads[i]) {
                ++knight_index;

                if (knight_index >= knights.size()) {
                    failed = true;
                    break;
                }       
            }

            payment += knights[knight_index];
            ++knight_index;
        }

        if (failed)
            cout << "Loowater is doomed!" << endl;
        else
            cout << payment << endl;
        }


}
