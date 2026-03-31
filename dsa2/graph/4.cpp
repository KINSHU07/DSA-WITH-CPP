// DFS
#include <bits/stdc++.h>
using namespace std;

void help(int node, vector<int> adj[], vector<int> &vis, vector<int> &ls) {
    vis[node] = 1;
    ls.push_back(node);

    for (auto it : adj[node]) {
        if (!vis[it]) {
            help(it, adj, vis, ls);  // ✅ correct recursive call
        }
    }
}

vector<int> dfs(int V, vector<int> adj[]) {
    vector<int> vis(V, 0);
    vector<int> ls;

    help(0, adj, vis, ls);  // ✅ start DFS from node 0

    return ls;              // ✅ return result
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected graph
    }

    vector<int> dfsAns = dfs(V, adj);

    for (int x : dfsAns) {
        cout << x << " ";
    }

    return 0;
}
