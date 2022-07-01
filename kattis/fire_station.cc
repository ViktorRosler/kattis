#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> floyd_warshall(vector<vector<int>> adj_matrix) {
    vector<vector<int>> dist;
    for (int i{0}; i<adj_matrix.size(); ++i) {
        dist.push_back(vector<int>());
        for (int j{0}; j<adj_matrix.size(); ++j) {
            dist[i].push_back(adj_matrix[i][j]);
        }
    }

    for (int k{0}; k < dist.size(); ++k) {
		for (int i{0}; i < dist.size(); ++i) {
			for (int j{0}; j < dist.size(); ++j) {
				if (dist[i][j] > dist[i][k] + dist[k][j]) {
						dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}

    return dist;
}

int main() 
{
	ifstream cin("test_cases/fire_station.txt");

    int big = 99999999;

    int cases;
    cin >> cases;

    for (int i{0}; i<cases; ++i) {
        int station_count, intersection_count;
        cin >> station_count >> intersection_count;

        vector<vector<int>> intersections;
        for (int j{0}; j<intersection_count; ++j) {
            intersections.push_back(vector<int>());
            for (int k{0}; k<intersection_count; ++k) {
                intersections[j].push_back(big);
            }
            intersections[j][j] = 0;
        }

        vector<int> stations;
        for (int j{0}; j<station_count; ++j) {
            int tmp;
            cin >> tmp;
            stations.push_back(tmp);
        }

        int x, y, weight;
        string input;
        getline(cin,input);
        while (true) {
            getline(cin,input);
			if (input.empty()) 
                break;

            string x = input.substr(0, input.find(" "));
			input.erase(0, input.find(" ") + 1);
			string y = input.substr(0, input.find(" "));
			input.erase(0, input.find(" ") + 1);

            intersections[stoi(x)-1][stoi(y)-1] = stoi(input);
			intersections[stoi(y)-1][stoi(x)-1] = stoi(input);
        }

        vector<vector<int>> dist = floyd_warshall(intersections);
        
        int answer = 0, max_dist = big; 
        for (int j{0}; j<intersection_count; ++j) {
            int new_max_dist = 0;
            for (int k{0}; k<intersection_count; ++k) {
                int new_dist = dist[k][j];
                for (int l{0}; l<station_count; ++l)
                    new_dist = min(new_dist, dist[k][stations[l]-1]);
                new_max_dist = max(new_dist, new_max_dist);
            }
            if (new_max_dist < max_dist) {
                answer = j;
                max_dist = new_max_dist;
            }
        } 

        if (i > 0)
            cout << endl;
        cout << answer+1 << endl;

    }
}
