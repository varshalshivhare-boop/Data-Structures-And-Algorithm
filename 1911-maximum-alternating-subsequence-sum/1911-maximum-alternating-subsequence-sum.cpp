class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long odd = 0;  // Subsequence ki length odd hai (Next element minus hoga)
        long long even = 0; // Subsequence ki length even hai (Next element plus hoga)
        
        for (int x : nums) {
            long long newOdd = max(odd, even + x);
            long long newEven = max(even, odd - x);
            
            odd = newOdd;
            even = newEven;
        }
        
        return odd; // Odd length subsequence ka sum hi humesha maximum hoga
    }
};