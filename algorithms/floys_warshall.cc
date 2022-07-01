#include <bits/stdc++.h>


using namespace std;


// floyd-warshall, adjacency matrix
vector<vector<int>> floyd_warshall(vector<vector<int>> adj_matrix) {
    vector<vector<int>> dist;
    for (int i{0}; i<adj_matrix.size(); ++i) {
        dist.push_back(vector<int>());
        for (int j{0}; j<adj_matrix.size(); ++j) {
            dist[i][j] = adj_matrix[i][j];
        }
    }

    for (int k{0}; k < dist.size(); ++k) {
		for (int i{0}; i <= dist.size(); ++i) {
			for (int j{0}; j <= dist.size(); ++j) {
				if (dist[i][j] > dist[i][k] + dist[k][j]) {
						dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}

    return dist;
}