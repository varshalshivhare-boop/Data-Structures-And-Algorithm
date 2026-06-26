class Solution {
private:
    // Declare the hash map as a member variable so it persists across calls
    unordered_map<int, int> dp;

public:
    int fib(int n) {
        // Base cases
        if (n == 0 || n == 1) return n;
        
        // Check if the value has already been calculated
        if (dp.find(n) != dp.end()) {
            return dp[n];
        }
        
        // Calculate, store in the map, and return
        dp[n] = fib(n - 1) + fib(n - 2);
        return dp[n];
    }
};