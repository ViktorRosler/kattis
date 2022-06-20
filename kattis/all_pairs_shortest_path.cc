#include <bits/stdc++.h>

int big = 99999999;
int neg_cycle = -12345678;

using namespace std;

vector<int> bellman_ford(vector<vector<int>> graph, int src, int vertices, int edges) {
    vector<int> dist;

    for (int i{0}; i < vertices; ++i) {
        dist.push_back(big);
    }
    dist[src] = 0;
    

    // calc shortest distances
    for (int i{0}; i < vertices; ++i) {
        for (int j{0}; j < edges; ++j) {
            int u = graph[j][0];        
            int v = graph[j][1];
            int weight = graph[j][2];

            if (dist[u] != big && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
     }

    // detect negative cycles
    for (int i{0}; i < edges; ++i) {
            int u = graph[i][0];
            int v = graph[i][1];
            int weight = graph[i][2];

            if (dist[u] != big && dist[u] + weight < dist[v]) {
                dist[v] = neg_cycle;
            } 
    }

    return dist;
}

int main() 
{
	ifstream cin("test_cases/all_pairs_shortest_path.txt");

    int nodes, edges, queries;
    bool first = true;

    while (true) {
        cin >> nodes >> edges >> queries;

        if (nodes == 0) {break;}

        if (!first) {
            cout << endl;
        } else {
            first = false;
        }

        vector<vector<int>> graph;

        for (int i{0}; i < edges; ++i) {
            int x, y, z;
            cin >> x >> y >> z;
            graph.push_back(vector<int>{x,y,z});
        }

        vector<vector<int>> result;
        for (int i{0}; i < nodes; ++i) {
            result.push_back(bellman_ford(graph, i, nodes, edges));
        }
        
        for (int i{0}; i < queries; ++i) {
            int x, y;
            cin >> x >> y;       

            if (result[x][y] == big)
                cout << "Impossible" << endl;
            else if (result[x][y] == neg_cycle)
                cout << "-Infinity" << endl;
            else
                cout << result[x][y] << endl;
        } 
        
    }

    

}