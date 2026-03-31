//topo sort using kahn algo

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
    }

    
    void topoSort() {
        vector<int> res;

        vector<int> indeg(V,0);
        for(int u = 0 ; u < V ; u++){
            for(auto v :l[u]){
                indeg[v]++;
            }
        }

        queue<int> q;
        for(int i = 0 ; i < V ; i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int curr = q.front();

            q.pop();
            res.push_back(curr);

            for(int v :l[curr]){
                indeg[v]--;
                if(indeg[v] == 0){
                    q.push(v);
                }
            }

        }

        for(int val: res){
            cout<<val<<" ";

        }
        cout<<endl;
    }
};

int main() {
    Graph g(6);

    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(5,0);
    g.addEdge(5,3);

    g.topoSort();
    return 0;
}
