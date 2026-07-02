class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // Total nodes (n) nikalne ke liye edges ka size + 1 karenge
        // Kyunki star graph me edges ki sankhya hamesha n - 1 hoti hai
        int n = edges.size() + 1;
        
        // Ek frequency array banayenge nodes ka count rakhne ke liye
        // Size n + 1 liya hai taaki 1-based indexing use kar sakein
        vector<int> count(n + 1, 0);
        
        // Saare edges par loop chalayenge aur nodes ka count badhayenge
        for (auto& edge : edges) {
            count[edge[0]]++;
            count[edge[1]]++;
        }
        
        // Ab check karenge ki kis node ka count n - 1 ke barabar hai
        for (int i = 1; i <= n; i++) {
            if (count[i] == n - 1) {
                return i; // Wahi center node hai
            }
        }
        
        return -1;
    }
};