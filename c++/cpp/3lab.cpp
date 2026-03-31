#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int getTotalNumber(int N, int M, int K, int NumberOfEdges, const vector<vector<int>>& Edges) {
    if (N == 0) return 0;
    if (N > 1 && K >= M) return 0;
    
    const int MOD = 1e9 + 7;
    
    vector<vector<int>> adj(N);
    for (const auto& edge : Edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    
    vector<int> parent(N, -1);
    vector<int> order;
    order.reserve(N);
    
    queue<int> q;
    q.push(0);
    order.push_back(0);
    
    int head = 0;
    while (head < (int)order.size()) {
        int u = order[head++];
        for (int v : adj[u]) {
            if (v != parent[u]) {
                parent[v] = u;
                order.push_back(v);
            }
        }
    }
    
    vector<vector<int>> dp(N, vector<int>(M + 1, 1));
    for (int i = 0; i < N; ++i) {
        dp[i][0] = 0; 
    }
    
    for (int i = N - 1; i >= 0; --i) {
        int u = order[i];
        
        for (int v : adj[u]) {
            if (v == parent[u]) continue; 
            
            vector<int> pref(M + 1, 0);
            long long acc = 0;
            for (int val = 1; val <= M; ++val) {
                acc = (acc + dp[v][val]) % MOD;
                pref[val] = acc;
            }
            
            long long total = pref[M];
            
            for (int val = 1; val <= M; ++val) {
                long long valid_ways = 0;
                
                if (K == 0) {
                    valid_ways = total;
                } else {
                    long long left_ways = 0;
                    long long right_ways = 0;
                    
                    if (val - K >= 1) {
                        left_ways = pref[val - K];
                    }
                    
                    if (val + K <= M) {
                        right_ways = (total - pref[val + K - 1] + MOD) % MOD;
                    }
                    
                    valid_ways = (left_ways + right_ways) % MOD;
                }
                
                dp[u][val] = (1LL * dp[u][val] * valid_ways) % MOD;
            }
            
            vector<int>().swap(dp[v]); 
        }
    }
    
    long long total_assignments = 0;
    for (int val = 1; val <= M; ++val) {
        total_assignments = (total_assignments + dp[0][val]) % MOD;
    }
    
    return total_assignments;
}