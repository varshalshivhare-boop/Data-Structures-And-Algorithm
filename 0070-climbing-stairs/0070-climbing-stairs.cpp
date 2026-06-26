class Solution {
public:
    // A 1D map or array is enough since we only track the step number 'n'
    unordered_map<int, int> dp; 

    int climbStairs(int n) {
        // Base cases
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        // Check if already calculated
        if (dp.find(n) != dp.end()) {
            return dp[n];
        }
        
        // The relation: ways(n) = ways(n-1) + ways(n-2)
        dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        
        return dp[n];
    }
};