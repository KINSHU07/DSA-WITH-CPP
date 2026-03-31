//adjanecy list

#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;                 // number of vertices
    list<int>* l;          // adjacency list

public:
    // Constructor
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    // Add edge (undirected)
    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // Print adjacency list
    void printAdjList() {
        for (int i = 0; i < V; i++) {
            cout << i << " -> ";
            for (int node : l[i]) {
                cout << node << " ";
            }
            cout << endl;
        }
    }

    vector<int> bfs(){
        vector<int> vis(V, 0);
        vector<int> ans;
        queue<int> q;
        q.push(0);
        vis[0] = 1;

        while(!q.empty()){
            int k = q.front();
            q.pop();

            ans.push_back(k);

            for(auto it: l[k]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }

    void dfshelper(int u , vector<int> &vis){
        cout<<u <<" ";
        vis[u] = 1;

        for(int v: l[u]){
            if(!vis[v]){
                dfshelper(v, vis);
            }
        }
    }

    void dfs(){
        int src = 0 ; 
        vector<int> vis(V, 0);
        dfshelper(src, vis);
    }
};

int main() {
    int V = 5;
    Graph g(V);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // g.printAdjList();
    vector<int> BFS = g.bfs();

    for(auto it: BFS){
        cout<<it<<endl;
    }
    g.dfs();
    return 0;
}
