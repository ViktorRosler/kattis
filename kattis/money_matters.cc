#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/money_matters.txt");

    int n,m;

    cin >> n >> m;

    vector<int> money;

    for (int i{0}; i<n; ++i) {
        int tmp;
        cin >> tmp;
        money.push_back(tmp);
    }

    vector<set<int>> groups;

    // cout << n << " " << m << " " << groups.size() << endl;

    int p1, p2;
    for (int i{0}; i<m; ++i) {
        cin >> p1 >> p2;
        for (int j{0}; j<=groups.size(); ++j) {
            if (j == groups.size()) {
                set<int> tmp = {p1, p2};
                groups.push_back(tmp);
                break;

            } else {
                auto find1 = groups[j].find(p1);
                auto find2 = groups[j].find(p2);

                if (find1 != groups[j].end() && find2 != groups[j].end())
                    break;

                if (find1 != groups[j].end()) {
                    groups[j].insert(p2);
                    for (int k{0}; k<groups.size(); ++k) {
                        if (k == j)
                            continue;
                        if (groups[k].find(p2) != groups[k].end()) {
                            for (auto iter = groups[k].begin(); iter != groups[k].end(); ++iter) {
                                groups[j].insert(*iter);
                            }
                            groups.erase(groups.begin() + k);
                        }
                    }
                    break;
                }

                if (find2 != groups[j].end()) {
                    groups[j].insert(p1);
                    for (int k{0}; k<groups.size(); ++k) {
                        if (k == j)
                            continue;
                        if (groups[k].find(p1) != groups[k].end()) {
                            for (auto iter = groups[k].begin(); iter != groups[k].end(); ++iter) {
                                groups[j].insert(*iter);
                            }
                            groups.erase(groups.begin() + k);
                        }
                    }
                    break;
                }
            }
        }
    }


    set<int> done;
    for (int i{0}; i<=groups.size(); ++i) {
        if (i == groups.size()) {
            for (int j{0}; j<=n; ++j) {
                if (j == n) {
                    cout << "POSSIBLE" << endl;
                    break;
                }
                    
                if (done.find(j) == done.end() && money[j] != 0) {
                    cout << "IMPOSSIBLE" << endl;
                    break;
                }
                    
            }

        } else {
            long long total = 0;
            for (auto iter = groups[i].begin(); iter != groups[i].end(); ++iter) {
                total += money[*iter];
                done.insert(*iter);
            }
            if (total != 0) {
                cout << "IMPOSSIBLE" << endl;
                break;
            }
        }
    }

}
