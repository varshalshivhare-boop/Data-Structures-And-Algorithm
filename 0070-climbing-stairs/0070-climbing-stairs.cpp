class Solution {
public:
    // A 1D map is all you need to cache results
    unordered_map<int, int> dp; 

    int climbStairs(int n) {
        // Base cases
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        // If we already computed this step, return it instantly
        if (dp.find(n) != dp.end()) return dp[n];
        
        // Cache and return the result
        dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return dp[n];
    }
};