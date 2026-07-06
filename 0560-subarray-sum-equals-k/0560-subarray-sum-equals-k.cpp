class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0; // Count hamesha 0 se shuru hoga

        // Pehla loop: Subarray ka starting point chunega
        for (int i = 0; i < n; i++) {
            int current_subarray_sum = 0;

            // Doosra loop: 'i' se shuru karke aage tak ka sum nikalega
            for (int j = i; j < n; j++) {
                current_subarray_sum += nums[j]; // Har index ka sum judta jayega

                // Agar kisi bhi index ka sum == k ho jaye
                if (current_subarray_sum == k) {
                    count++; // Match milne par count badhaya
                }
            }
        }
        
        return count; // Total count return kiya
    }
};