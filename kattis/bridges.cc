#include <bits/stdc++.h>

using namespace std;

// floyd-warshall, adjacency matrix
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
    int vertices, edges;
    cin >> vertices >> edges;

    vector<vector<int>> adj_matrix;
    for (int i{0}; i<vertices; ++i) {
        vector<int> tmp(vertices, 9999999);
        tmp[i] = 0;
        adj_matrix.push_back(tmp);
    }

    for (int i{0}; i<edges; ++i) {
        int a,b,c;
        cin >> a >> b >> c;
        adj_matrix[a-1][b-1] = c;
        adj_matrix[b-1][a-1] = c;
    }

    vector<vector<int>> dist = floyd_warshall(adj_matrix);
    
    cout << dist[0][vertices-1] << endl;

}