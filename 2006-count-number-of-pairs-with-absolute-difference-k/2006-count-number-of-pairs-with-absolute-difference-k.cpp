class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Absolute difference check 
                if (abs(nums[i] - nums[j]) == k) {
                    count++;
                }
            }
        }
        
        return count;
    }
};