class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        // Base Cases (Agar ghar hi na hon ya sirf 1 ho)
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        // DP Array banayein jo max paisa store karegi
        vector<int> dp(n);
        
        // Pehle do gharon ka setup fixed hai
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        // Baki saare gharon ke liye loop chalao
        for (int i = 2; i < n; i++) {
            // Ya toh aaj ka looto + do ghar pehle ka, ya fir kal tak ka max chalne do
            dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
        }
        
        // Aakhiri ghar mein jo value hogi, wahi hamara absolute maximum hoga
        return dp[n - 1];
    }
};