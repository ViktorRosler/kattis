#include <bits/stdc++.h>


using namespace std;


// bellman ford, adjacency matrix 
int big = 99999999;
int neg_cycle = -12345678;
vector<int> bellman_ford(vector<vector<int>> edges, int src, int vertices) {
    vector<int> dist;

    for (int i{0}; i < vertices; ++i) {
        dist.push_back(big);
    }
    dist[src] = 0;
    

    // calc shortest distances
    for (int i{0}; i < vertices; ++i) {
        for (int j{0}; j < edges.size(); ++j) {
            int u = edges[j][0];        
            int v = edges[j][1];
            int weight = edges[j][2];

            if (dist[u] != big && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
     }

    // detect negative cycles
    for (int i{0}; i < edges.size(); ++i) {
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];

            if (dist[u] != big && dist[u] + weight < dist[v]) {
                dist[v] = neg_cycle;
            } 
    }

    return dist;
}