#include <bits/stdc++.h>
using namespace std;

// Helper function to trim strings (as seen in your platform's boilerplate)
string trim(string s) {
    size_t start = s.find_first_not_of(" \n\r\t");
    size_t end = s.find_last_not_of(" \n\r\t");
    if (start == string::npos) return "";
    return s.substr(start, end - start + 1);
}

long calculatePathsBeauty(int n, vector<int> par, vector<int> a) {
    // Adjacency list to represent the tree
    vector<vector<int>> adj(n + 1);
    int root = 1;
    
    // Build the tree
    for (int i = 0; i < n; ++i) {
        if (par[i] == 0) {
            root = i + 1; // Node with parent 0 is the root
        } else {
            adj[par[i]].push_back(i + 1);
        }
    }

    // Map to store the latest depth at which a specific XOR prefix was seen
    unordered_map<int, int> seen_depth;
    seen_depth[0] = 0; 
    
    long long total_beauty = 0;

    // DFS with backtracking lambda function
    auto dfs = [&](auto& self, int u, int depth, int curr_xor, int last_cut_depth, long long current_beauty) -> void {
        // u - 1 because the `a` vector is 0-indexed for nodes 1 to n
        curr_xor ^= a[u - 1];

        auto it = seen_depth.find(curr_xor);
        bool present = (it != seen_depth.end());
        int old_seen_depth = present ? it->second : -1;

        long long new_beauty = current_beauty;
        int new_last_cut_depth = last_cut_depth;

        // If the prefix XOR was seen at or after the last cut, we found a valid 0-XOR subpath
        if (old_seen_depth >= last_cut_depth) {
            new_beauty++;
            new_last_cut_depth = depth; // Make a new cut at the current depth
        }

        // Add the current node's beauty to our global total
        total_beauty += new_beauty;

        // Save the new depth for the current prefix XOR and recurse to children
        seen_depth[curr_xor] = depth;
        for (int v : adj[u]) {
            self(self, v, depth + 1, curr_xor, new_last_cut_depth, new_beauty);
        }

        // Backtrack: Restore the map's exact state before leaving this node's branch
        if (present) {
            seen_depth[curr_xor] = old_seen_depth;
        } else {
            seen_depth.erase(curr_xor);
        }
    };

    // Start DFS from the root
    dfs(dfs, root, 1, 0, 0, 0);

    return (long)total_beauty;
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string inputline;
    
    // Read n
    if (!getline(cin, inputline)) return 0;
    int n = stoi(trim(inputline));
    
    // Read par array (n lines)
    vector<int> par(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, inputline);
        par[i] = stoi(trim(inputline));
    }
    
    // Read a array (n lines)
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, inputline);
        a[i] = stoi(trim(inputline));
    }
    
    // Calculate and print result
    cout << calculatePathsBeauty(n, par, a) << "\n";
    
    return 0;
}