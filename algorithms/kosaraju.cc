/*
    Kosaraju's Algorithm

    Find all strongly connected components in a graph

*/

#include <bits/stdc++.h>

using namespace std;

int n = 101;

// adjacency list
vector<vector<int>> adj_list;
vector<int> visited_1(n);

// transpose of graph
vector<vector<int>> transpose_list;
vector<int> visited_2(n);

// stack
vector<int> st;

void depth_first_search(int node, vector<vector<int>> adj_list, vector<int> visited, bool push_stack = false)  {
    visited_1[node] = 1;
    for (int i{0}; i<adj_list[node].size(); ++i) {
        if (visited_1[i] != 1) {
            depth_first_search(adj_list[node][i], adj_list, visited, push_stack);
        }
    }
    if (push_stack)
        st.push_back(node);
}


int main() {
    int vertices, edges;
    cin >> vertices >> edges;

    for (int i{0}; i<n; ++i) {
        adj_list.push_back(vector<int>());
        transpose_list.push_back(vector<int>());
    }

    // add edges to adj. lists
    int x,y;
    while (edges--) {
        cin >> x >> y;

        adj_list[x].push_back(y);
        transpose_list[y].push_back(x);
        
    }

    // 
    depth_first_search(0, adj_list, visited_1, true);

    while
}