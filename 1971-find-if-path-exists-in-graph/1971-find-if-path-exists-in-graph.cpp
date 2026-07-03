class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // Agar source aur destination same hai, toh aage badhne ki zaroorat hi nahi
        if (source == destination) return true;

        // 1. Pehle edges se Adjacency List taiyar karenge (Kyuki LeetCode me edges list milti hai)
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]); // Undirected graph
        }

        // 2. Visited array aur Queue banana (0-based indexing ke liye size n)
        vector<int> visited(n, 0);
        queue<int> q;

        // Hum pure graph me nahi ghumenge, bas 'source' se shuru karenge
        q.push(source);
        visited[source] = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            // Agar ghumte-ghumte hume destination mil gaya, toh true return kar do
            if (node == destination) {
                return true;
            }

            // AAPKA LOGIC: Padosi nodes ko check karna
            for (auto it : adj[node]) {
                if (!visited[it]) {
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }

        // Agar queue khali ho gayi aur destination nahi mila, matlab rasta nahi hai
        return false;
    }
};