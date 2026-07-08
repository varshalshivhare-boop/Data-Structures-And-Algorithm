class Solution {
  private:
    // Step 3, 4 & 5: DFS Helper Function
    bool dfs_helper(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& dfs_visited) {
        // Step 3: Path mein entry - Dono ko True mark karein
        visited[node] = true;
        dfs_visited[node] = true;

        // Step 4: Saare neighbors ko explore karein
        for (int neighbor : adj[node]) {
            // Case A: Agar neighbor unvisited hai, toh recursive call karein
            if (!visited[neighbor]) {
                if (dfs_helper(neighbor, adj, visited, dfs_visited)) {
                    return true;
                }
            }
            // Case B: Agar neighbor visited hai AUR current active path (dfs_visited) mein bhi hai
            else if (dfs_visited[neighbor]) {
                return true; // Cycle detected!
            }
        }

        // Step 5: Backtracking - Active path se node ko hatayein (Cleanup)
        dfs_visited[node] = false;
        return false;
    }

  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // GFG standard ke liye sabse pehle input edges se Adjacency List taiyar karein
        vector<vector<int>> adj(V);
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v); // Directed graph hai isliye sirf u -> v
        }
        
        // Step 1: Do boolean vectors banayein tracking ke liye
        vector<bool> visited(V, false);
        vector<bool> dfs_visited(V, false);

        // Step 2: Saare nodes par loop (taaki disconnected components bhi handle ho sakein)
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfs_helper(i, adj, visited, dfs_visited)) {
                    return true;
                }
            }
        }
        
        return false; // Poore graph mein koi cycle nahi mili
    }
};