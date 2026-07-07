class Solution {
public:
    // DFS Function जो Cycle Detect करेगा
    bool isCycleUndirDFS(int node, int par, vector<vector<int>>& adj, vector<bool>& visit) {
        visit[node] = true;
        
        // अपने सभी Neighbors को Check करें
        for (auto v : adj[node]) {
            if (!visit[v]) {
                if (isCycleUndirDFS(v, node, adj, visit)) {
                    return true;
                }
            } 
            // अगर Neighbor पहले से Visited है और वो Parent नहीं है -> Cycle है!
            else if (v != par) {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        // 1. [सुधार] पहले edges से Adjacency List (adj)
        vector<vector<int>> adj(V);
        for(auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u); // Undirected graph है
        }
        
        // 2. Visited Array बनाएँ
        vector<bool> visit(V, false);
        
        // 3. सभी Components के लिए Loop चलाएँ
        for (int i = 0; i < V; i++) {
            if (!visit[i]) {
                if (isCycleUndirDFS(i, -1, adj, visit)) {
                    return true;
                }
            }
        }
        return false;
    }
};