#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/bungee_builder.txt");

    int mountains;
    cin >> mountains;

    vector<int> heights;
    for (int i {0}; i < mountains; ++i) {
        int height;
        cin >> height;
        heights.push_back(height);
    }

    int max = 0;
    int outer_index = 1;
    int local_start = heights[0];
    long local_min = 10000000000;
    while (outer_index < heights.size()) {
        if (heights[outer_index] >= local_start) {

            long height = local_start - local_min;
            if (height > max)
                max = height;

            local_start = heights[outer_index];
            local_min = 10000000000;
        }
        else if (heights[outer_index] > local_min) {
            long height = heights[outer_index] - local_min;

            if (height > max)
                max = height;

        }
        else {
            local_min = heights[outer_index];
        }
        ++outer_index;
    }
    cout << max << endl;
}