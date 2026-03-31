def getTotalNumber(N, M, K, NumberOfEdges, Edges):
    # Edge case: If the tree has no nodes
    if N == 0:
        return 0
        
    MOD = 10**9 + 7
    
    # Build adjacency list for the tree
    adj = [[] for _ in range(N)]
    for u, v in Edges:
        adj[u].append(v)
        adj[v].append(u)
        
    # DP table: dp[u][val] represents the number of valid assignments for the 
    # subtree rooted at 'u' given that node 'u' is assigned the value 'val'.
    # We initialize it to 1 (which acts as the base case for leaf nodes).
    dp = [[1] * (M + 1) for _ in range(N)]
    
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
                
    # Process nodes bottom-up (reverse of BFS order)
    for u in reversed(order):
        for v in adj[u]:
            if v == parent[u]:
                continue # Skip the parent, we only process children
                
            # Compute prefix sums of the child's DP array for O(1) range queries
            pref = [0] * (M + 1)
            for i in range(1, M + 1):
                pref[i] = (pref[i - 1] + dp[v][i]) % MOD
                
            # Update the current node's DP states based on the child's valid assignments
            for val in range(1, M + 1):
                valid_ways = 0
                
                if K == 0:
                    # If K is 0, any value 1 through M is valid
                    valid_ways = pref[M]
                else:
                    # Add valid assignments from the range [1, val - K]
                    if val - K >= 1:
                        valid_ways = (valid_ways + pref[val - K]) % MOD
                    
                    # Add valid assignments from the range [val + K, M]
                    # Python's modulo automatically handles negative numbers safely
                    if val + K <= M:
                        valid_ways = (valid_ways + pref[M] - pref[val + K - 1]) % MOD
                        
                # Multiply the combinations of independent children branches
                dp[u][val] = (dp[u][val] * valid_ways) % MOD
                
    # The final answer is the sum of all valid assignments for the root node (node 0)
    total_assignments = sum(dp[0][1:]) % MOD
    
    return total_assignments