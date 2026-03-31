//cycle detection on bfs traversal

#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int>* l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool isCycleUndirBFS(int src, vector<bool> &vis) {
        queue<pair<int,int>> q;
        q.push({src, -1});
        vis[src] = true;

        while (!q.empty()) {
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();

            for (int v : l[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push({v, u});
                } else if (v != parU) {
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle() {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (isCycleUndirBFS(i, vis))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    int V, E;
    cin >> V >> E;

    Graph g(V);
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    cout << (g.isCycle() ? "Cycle Found" : "No Cycle");
    return 0;
}
