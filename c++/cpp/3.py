def getTotalNumber(N, M, K, NumberOfEdges, Edges):
    # Edge case: If the tree has no nodes
    if N == 0:
        return 0
        
    # Edge case: If K >= M, it's impossible to have a difference of K between 1 and M.
    if N > 1 and K >= M:
        return 0
        
    MOD = 10**9 + 7
    
    # Build adjacency list for the tree
    adj = [[] for _ in range(N)]
    for u, v in Edges:
        adj[u].append(v)
        adj[v].append(u)
        
    # We use BFS to establish parent-child relationships and get a 
    # topological order so we can process the tree bottom-up (leaves to root).
    parent = [-1] * N
    order = []
    q = [0] # Arbitrarily pick node 0 as the root
    
    # Standard BFS
    head = 0
    while head < len(q):
        u = q[head]
        head += 1
        order.append(u)
        for v in adj[u]:
            if v != parent[u]:
                parent[v] = u
                q.append(v)
                
    # Instead of an N x M matrix, we hold array references and free them when done
    dp = [None] * N
    
    # Process nodes bottom-up (reverse of BFS order)
    for u in reversed(order):
        # Base state: 1 valid way for the node itself
        dp_u = [1] * (M + 1)
        
        for v in adj[u]:
            if v == parent[u]:
                continue # Skip the parent, we only process children
                
            dp_v = dp[v]
            
            # Compute prefix sums of the child's DP array for O(1) range queries
            pref = [0] * (M + 1)
            acc = 0
            for i in range(1, M + 1):
                acc = (acc + dp_v[i]) % MOD
                pref[i] = acc
                
            total = pref[M]
            
            # Update the current node's DP states based on the child's valid assignments
            if K == 0:
                for val in range(1, M + 1):
                    dp_u[val] = (dp_u[val] * total) % MOD
            else:
                ways_array = [0] * (M + 1)
                
                # BRANCHLESS ADDITIONS: Split the logic into precise ranges to avoid `if` checks
                
                # 1. Add valid assignments from the right range [val + K, M]
                for val in range(1, M - K + 1):
                    ways_array[val] += total - pref[val + K - 1]
                    
                # 2. Add valid assignments from the left range [1, val - K]
                for val in range(K + 1, M + 1):
                    ways_array[val] += pref[val - K]
                    
                # Multiply the combinations of independent children branches
                for val in range(1, M + 1):
                    # Python natively handles negative modulo remainders transparently
                    dp_u[val] = (dp_u[val] * (ways_array[val] % MOD)) % MOD
                    
            # CRITICAL Optimization: Free the child DP array memory to prevent Memory Limit Exceeded
            dp[v] = None
            
        dp[u] = dp_u
        
    # The final answer is the sum of all valid assignments for the root node (node 0)
    total_assignments = sum(dp[0][1:]) % MOD
    
    return total_assignments