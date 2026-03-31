//cycle detection in directed graph

#include <bits/stdc++.h>
using namespace std;

bool isCycleDFS(int node, vector<vector<int>> &adj, vector<bool> &vis, vector<bool> &stack) {
    vis[node] = true;
    stack[node] = true;

    for (int neighbour : adj[node]) {
        if (!vis[neighbour]) {
            if (isCycleDFS(neighbour, adj, vis, stack))
                return true;
        }
        else if (stack[neighbour]) {
            return true; 
        }
    }

    stack[node] = false;
    return false;
}

bool isCycle(int V, vector<vector<int>> &adj) {
    vector<bool> vis(V, false);
    vector<bool> stack(V, false);

    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            if (isCycleDFS(i, adj, vis, stack))
                return true;
        }
    }
    return false;
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj(V);

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // directed edge
    }

    if (isCycle(V, adj))
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";

    return 0;
}
