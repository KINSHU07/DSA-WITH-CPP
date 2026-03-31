//detect cycle on a undirected graph

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

    bool helper(int src , int par , vector<bool> &vis){
        vis[src] = true;
        list<int> neigh = l[src];
        for(auto it : neigh){
            if(!vis[it]){
                if(helper(it, src, vis)){
                    return true;
                }
            } else if( it != par){
                return true;
            }
        }
        return false;
    }
    bool iscycle(){
       vector<bool> vis(V , false);
       for(int i = 0 ; i < V ; i++){
        if(!vis[i]){
            if(helper(i , -1 , vis)){
                return true;
            }
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

    cout << (g.iscycle() ? "Cycle Found" : "No Cycle");
    return 0;
}