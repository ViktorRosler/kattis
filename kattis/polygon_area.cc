#include <bits/stdc++.h>

using namespace std;

int det(pair<int,int> p1, pair<int,int> p2)
{
    return p1.first * p2.second - p1.second * p2.first;
}

int main() 
{

    ifstream cin("test_cases/polygon_area.txt");

    cout << fixed << setprecision(1);

	int n;

    while (true) {
        cin >> n;

        if (n == 0)
            break;

        vector<pair<int, int>> points;

        int x,y;
        for (int i{0}; i<n; ++i) {
            cin >> x >> y;
            points.push_back(make_pair(x,y));   
        }

        int area = 0;
        for (int i{0}; i<n; ++i) {
            double width, height;
            if (i == n-1) 
               area += det(points[i], points[0]);
            else 
                area += det(points[i], points[i+1]);
        }

        if (area < 0) 
            cout << "CW " << -area / 2.0 << endl;
        else
            cout << "CCW " << area / 2.0 << endl;

    }
}
