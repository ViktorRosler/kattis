#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int lawns;
    double seed_cost;
    cin >> seed_cost >> lawns;

    double height, width, cost = 0;
    for (int i{0}; i<lawns; ++i) {
        cin >> width >> height;
        cost += width * height * seed_cost;
    }
    cout << fixed << setprecision(7) << cost << endl;

}
