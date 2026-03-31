//BFS        TC: O(V+E)
#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    vector<int> vis(V, 0);
    queue<int> q;
    vector<int> ans;

    // start BFS from node 0
    vis[0] = 1;
    q.push(0);

    while (!q.empty()) {
        int k = q.front();
        q.pop();

        ans.push_back(k);

        for (auto it : adj[k]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return ans;
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

    vector<int> bfs = bfsOfGraph(V, adj);

    for (int x : bfs) {
        cout << x << " ";
    }

    return 0;
}
