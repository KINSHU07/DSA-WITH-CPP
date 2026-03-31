def getTotalNumber(N, M, K, NumberOfEdges, Edges):
    if N == 0 or (N > 1 and K >= M):
        return 0
        
    MOD = 10**9 + 7
    adj = [[] for _ in range(N)]
    for u, v in Edges:
        adj[u].append(v)
        adj[v].append(u)
        
    parent = [-1] * N
    order = []
    q = [0]
    
    head = 0
    while head < len(q):
        u = q[head]
        head += 1
        order.append(u)
        for v in adj[u]:
            if v != parent[u]:
                parent[v] = u
                q.append(v)
                
    dp = [None] * N
    
    for u in reversed(order):
        dp_u = [1] * (M + 1)
        dp_u[0] = 0 
        
        for v in adj[u]:
            if v == parent[u]:
                continue
                
            dp_v = dp[v]
            pref = [0] * (M + 1)
            acc = 0
            
            for i in range(1, M + 1):
                acc = (acc + dp_v[i]) % MOD
                pref[i] = acc
                
            total = pref[M]
            
            if K == 0:
                dp_u = [(val_u * total) % MOD for val_u in dp_u]
            else:
                ways_v = [0] * (M + 1)
                
                for i in range(1, M - K + 1):
                    ways_v[i] = total - pref[i + K - 1]
                    
                for i in range(K + 1, M + 1):
                    ways_v[i] += pref[i - K]
                    
                dp_u = [(u_way * v_way) % MOD for u_way, v_way in zip(dp_u, ways_v)]
                
            dp[v] = None
            
        dp[u] = dp_u
        
    return sum(dp[0][1:]) % MOD