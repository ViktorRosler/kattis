#include <bits/stdc++.h>

using namespace std;

double dist(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a,b,c,d,dx,dy,k;

    dx = x3 - x2;
    dy = y3 - y2;

    a = (-1) * dy;
    b = dx;
    c = x2*dy - y2*dx;

    k = a*a + b*b;
    d = fabs(a*x1+ b*y1 +c)/sqrt(k);

    double max_y = max(y2,y3), min_y = min(y2,y3), max_x = max(x2,x3), min_x = min(x2,x3);
    double px = (b*(b*x1 - a*y1) - a*c)/k;
    double py = (a*((-1.0)*b*x1 + a*y1) - b*c)/k;

    if (max_y >= py && py >= min_y && max_x >= px && px >= min_x)
        return d;

    double d1 = sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));
    double d2 = sqrt((y3-y1)*(y3-y1) + (x3-x1)*(x3-x1));
    return min(d1,d2);
}

int main() {
    int cases;
    cin >> cases;

    for (int i{0}; i<cases; ++i) {
        int inner_p;
        cin >> inner_p;
        
        int a,b;
        vector<pair<int,int>> inner;
        for (int j{0}; j<inner_p; ++j) {
            cin >> a >> b;
            inner.push_back(make_pair(a,b));
        }

        int outer_p;
        cin >> outer_p;

        vector<pair<int,int>> outer;
        for (int j{0}; j<outer_p; ++j) {
            cin >> a >> b;
            outer.push_back(make_pair(a,b));
        }

        double min_dist = -1;
        for (int j{0}; j<inner_p; ++j) {
            for (int k{0}; k<outer_p; ++k) {
                double d;
                if (k == outer_p - 1) {
                    d = dist(inner[j].first, inner[j].second, outer[k].first, outer[k].second, outer[0].first, outer[0].second);
                } else {
                    d = dist(inner[j].first, inner[j].second, outer[k].first, outer[k].second, outer[k+1].first, outer[k+1].second);
                }
                if (min_dist == -1)
                    min_dist = d;
                else
                    min_dist = min(min_dist, d);
            }
        }

        cout << fixed << setprecision(8) << min_dist / 2 << endl;
    }
}