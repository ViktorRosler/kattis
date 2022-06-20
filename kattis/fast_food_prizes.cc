#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/fast_food_prices.txt");

    int cases;
    cin >> cases;

    for (int i{0}; i < cases; ++i)  {
        int n,m;

        cin >> n >> m;
        vector<pair<int,vector<int>>> prizes;
        
        for (int j{0}; j<n; ++j) {
            vector<int> prize;
            int prize_money, stickers;

            cin >> stickers;
            for (int k{0}; k<stickers; ++k) {
                int p;
                cin >> p;
                prize.push_back(p);
            }
            cin >> prize_money;
            prizes.push_back(make_pair(prize_money, prize));
        }

        vector<int> tickets;
        for (int j{0}; j<m; ++j) {
            int t;
            cin >> t;
            tickets.push_back(t);
        }

        int total = 0;
        for (int j{0}; j<prizes.size(); ++j) {
            bool done = false;
            while (!done) {
                for (int k{0}; k<prizes[j].second.size(); ++k) {
                    --tickets[prizes[j].second[k]-1];
                    if (tickets[prizes[j].second[k]-1] < 0) {
                        done = true;
                        break;
                    }
                    if (done) 
                        break;      
                }
                if (!done)
                    total += prizes[j].first;
            }
        }
        cout << total << endl;
    }
}